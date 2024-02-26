NAME          = libft.a

CC            = cc
CFLAGS        = -Wall -Wextra -Werror

INCLUDE       = ./includes

CTYPE_SRC     = ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isblank.c \
				ft_isdigit.c \
				ft_isdouble.c \
				ft_isint.c \
				ft_islower.c \
				ft_isnumber.c \
				ft_isprint.c \
				ft_isspace.c \
				ft_isstrspace.c \
				ft_isupper.c \
				ft_tolower.c \
				ft_toupper.c \

LIST_SRC      = ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c

STDIO_SRC     = ft_printf.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_vdprintf.c \
				get_next_line.c \

STDLIB_SRC    = ft_abs.c \
				ft_atoi.c \
				ft_atol.c \
				ft_atoll.c \
				ft_calloc.c \
				ft_itoa.c \
				ft_atof.c \
				ft_strtol.c

STRING_SRC    = ft_bzero.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_split.c \
				ft_strcat.c \
				ft_strchr.c \
				ft_strcmp.c \
				ft_strcpy.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncat.c \
				ft_strncmp.c \
				ft_strncpy.c \
				ft_strndup.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strtrim.c \
				ft_substr.c

CTYPE_PATH    = ctype
LIST_PATH     = list
STDIO_PATH    = stdio
STDLIB_PATH   = stdlib
STRING_PATH   = string

CTYPE_SRCS	  = $(addprefix $(CTYPE_PATH)/, $(CTYPE_SRC))
LIST_SRCS	  = $(addprefix $(LIST_PATH)/, $(LIST_SRC))
STDIO_SRCS	  = $(addprefix $(STDIO_PATH)/, $(STDIO_SRC))
STDLIB_SRCS	  = $(addprefix $(STDLIB_PATH)/, $(STDLIB_SRC))
STRING_SRCS	  = $(addprefix $(STRING_PATH)/, $(STRING_SRC))

SRCS          = $(CTYPE_SRCS) \
				$(LIST_SRCS) \
				$(STDIO_SRCS) \
				$(STDLIB_SRCS) \
				$(STRING_SRCS)
OBJS          = $(SRCS:.c=.o)

CHECK		= \033[32m[✔]\033[0m
REMOVE		= \033[31m[✘]\033[0m
GENERATE	= \033[33m[➤]\033[0m
BLUE		= \033[1;34m
YELLOW		= \033[1;33m
RESET		= \033[0m

TOTAL_FILES := $(shell echo $(words $(SRCS)))
CURRENT_FILE = 1

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
	@ printf "$(CHECK) $(BLUE)Compiling libft...%-50.50s\n$(RESET)"

# for Mac
.c.o: $(OBJS)
	@ $(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@
	$(call progress)

# for Ubuntu
#  %.o: %.c $(INCLUDE)
# 	@ $(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

clean:
	@ $(RM) $(OBJS)
	@echo "$(REMOVE) $(BLUE)Remove libft object files. $(RESET)"

fclean:
	@ $(RM) $(NAME) $(OBJS)
	@echo "$(REMOVE) $(BLUE)Remove libft object files and $(NAME). $(RESET)"

re: fclean all

.PHONY: bonus clean fclean re all
