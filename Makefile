NAME          = libft.a

CC            = cc
CFLAGS        = -Wall -Wextra -Werror
DEPFLAGS      = -MMD -MP

INCLUDE       = ./includes

SRCS          = $(shell find . -name "*.c")
OBJ           = $(SRCS:.c=.o)
OBJS          = $(addprefix objs/,$(OBJ))
DEP           = $(OBJ:.o=.d)
DEPS          = $(addprefix deps/,$(DEP))

CHECK         = \033[32m[✔]\033[0m
REMOVE        = \033[31m[✘]\033[0m
GENERATE      = \033[33m[➤]\033[0m
BLUE          = \033[1;34m
YELLOW        = \033[1;33m
RESET         = \033[0m

TOTAL_FILES   := $(shell echo $(words $(SRCS)))
CURRENT_FILE  = 1

define progress
	@printf "$(GENERATE) $(YELLOW)Libft obj file gen Progress: %3d%% (%d/%d)$(RESET)\r" $$(($(CURRENT_FILE)*100/$(TOTAL_FILES))) $(CURRENT_FILE) $(TOTAL_FILES)
	@$(eval CURRENT_FILE=$(shell echo $$(($(CURRENT_FILE)+1))))
	@if [ $(CURRENT_FILE) -gt $(TOTAL_FILES) ]; then \
		printf "$(GENERATE) $(YELLOW)Finish Generating LIBFT Object files !%-50.50s\n$(RESET)"; \
	fi
endef

all: $(NAME)

$(NAME): $(OBJS)
	@ ar rc $(NAME) $(OBJS)
	@ ranlib $(NAME)
	@ printf "$(CHECK) $(BLUE)Compiling libft...%-50.50s\n$(RESET)"

-include $(DEPS_DIRS)

objs/%.o: %.c
	@ mkdir -p $(dir $@)
	@ mkdir -p deps/$(dir $*)
	@ $(CC) $(CFLAGS) $(DEPFLAGS) -I $(INCLUDE) -c $< -o $@ -MF deps/$*.d
	$(call progress)

clean:
	@ $(RM) -r objs deps
	@echo "$(REMOVE) $(BLUE)Remove libft object and dependency files. $(RESET)"

fclean:
	@ $(RM) -r $(NAME) objs deps
	@echo "$(REMOVE) $(BLUE)Remove libft object files, dependency files, and $(NAME). $(RESET)"

re: fclean all

.PHONY: clean fclean re all
