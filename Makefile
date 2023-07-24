NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

INCLUDE = 'libft.h'

CTYPE_SRCS = ctype/ft_isalnum.c ctype/ft_isalpha.c ctype/ft_isascii.c ctype/ft_isdigit.c \
				ctype/ft_isprint.c ctype/ft_isspace.c ctype/ft_tolower.c ctype/ft_toupper.c

LIST_SRCS = list/ft_lstadd_back.c list/ft_lstadd_front.c list/ft_lstclear.c list/ft_lstdelone.c \
				list/ft_lstiter.c list/ft_lstlast.c list/ft_lstmap.c list/ft_lstnew.c list/ft_lstsize.c

STDIO_SRCS = stdio/ft_putchar_fd.c stdio/ft_putendl_fd.c stdio/ft_putnbr_fd.c stdio/ft_putstr_fd.c \
				stdio/get_next_line/get_next_line.c stdio/get_next_line/get_next_line_utils.c \
				  
STDLIB_SRCS = stdlib/ft_atoi.c stdlib/ft_atol.c stdlib/ft_atoll.c stdlib/ft_calloc.c stdlib/ft_itoa.c

STRING_SRCS = string/ft_bzero.c string/ft_memchr.c string/ft_memcmp.c string/ft_memcpy.c \
				string/ft_memmove.c string/ft_memset.c string/ft_split.c string/ft_strchr.c string/ft_strcmp.c \
				string/ft_strdup.c string/ft_strjoin.c string/ft_strlcat.c string/ft_strlcpy.c \
				string/ft_strlen.c string/ft_strmapi.c string/ft_strncmp.c string/ft_strnstr.c \
				string/ft_strrchr.c string/ft_strtrim.c string/ft_substr.c

PRINTF_PATH = ./stdio/ft_printf
PRINTF = libftprintf.a

SRCS = $(CTYPE_SRCS) $(LIST_SRCS) $(STDIO_SRCS) $(STDLIB_SRCS) $(STRING_SRCS)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

CHECK = \033[32m[✔]\033[0m
REMOVE = \033[31m[✘]\033[0m
BLUE = \033[1;34m
RESET = \033[0m

$(NAME): $(OBJS)
	@ make -C $(PRINTF_PATH)
	@ mv $(PRINTF_PATH)/$(PRINTF) ./$(NAME)
	@ ar rc $(NAME) $(OBJS)
	@echo "$(CHECK) $(BLUE)Compiling libft...$(RESET)"

.c.o: $(OBJS)
	@ $(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

clean:
	@ make clean -C $(PRINTF_PATH)
	@ $(RM) $(OBJS)
	@echo "$(REMOVE) $(BLUE)Remove libft object files... $(RESET)"

fclean: clean
	@ $(RM) $(NAME)
	@ make fclean -C $(PRINTF_PATH)
	@echo "$(REMOVE) $(BLUE)Remove $(NAME)$(RESET)"

re: fclean all

.PHONY: bonus clean fclean re all