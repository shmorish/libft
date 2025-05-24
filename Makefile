NAME          = libft.a

CC            = cc
CFLAGS        = -Wall -Wextra -Werror
DEPFLAGS      = -MMD -MP

INC_DIR       = ./incs

# SRCS          = $(shell find ./srcs -name "*.c")
SRCS          = ./srcs/ctype/ft_isnumber.c ./srcs/ctype/ft_isdigit.c ./srcs/ctype/ft_isblank.c ./srcs/ctype/ft_isascii.c ./srcs/ctype/ft_isprint.c ./srcs/ctype/ft_isdouble.c ./srcs/ctype/ft_toupper.c ./srcs/ctype/ft_isalpha.c ./srcs/ctype/ft_islower.c ./srcs/ctype/ft_isupper.c ./srcs/ctype/ft_isstrspace.c ./srcs/ctype/ft_isint.c ./srcs/ctype/ft_isalnum.c ./srcs/ctype/ft_isspace.c ./srcs/ctype/ft_tolower.c ./srcs/stdio/ft_vdprintf.c ./srcs/stdio/ft_putstr_fd.c ./srcs/stdio/ft_putnbr_fd.c ./srcs/stdio/ft_printf.c ./srcs/stdio/get_next_line.c ./srcs/stdio/ft_putendl_fd.c ./srcs/stdio/ft_putchar_fd.c ./srcs/list/ft_lstadd_back.c ./srcs/list/ft_lstnew.c ./srcs/list/ft_lstlast.c ./srcs/list/ft_lstclear.c ./srcs/list/ft_lstiter.c ./srcs/list/ft_lstmap.c ./srcs/list/ft_lstsize.c ./srcs/list/ft_lstadd_front.c ./srcs/list/ft_lstdelone.c ./srcs/stdlib/ft_strtol.c ./srcs/stdlib/ft_atol.c ./srcs/stdlib/ft_atof.c ./srcs/stdlib/ft_atoll.c ./srcs/stdlib/ft_abs.c ./srcs/stdlib/ft_calloc.c ./srcs/stdlib/ft_atoi.c ./srcs/stdlib/ft_itoa.c ./srcs/string/ft_strncat.c ./srcs/string/ft_strnstr.c ./srcs/string/ft_strlcpy.c ./srcs/string/ft_strlen.c ./srcs/string/ft_memcmp.c ./srcs/string/ft_strchr.c ./srcs/string/ft_striteri.c ./srcs/string/ft_bzero.c ./srcs/string/ft_strjoin.c ./srcs/string/ft_memcpy.c ./srcs/string/ft_strstr.c ./srcs/string/ft_strcat.c ./srcs/string/ft_split.c ./srcs/string/ft_strrchr.c ./srcs/string/ft_memchr.c ./srcs/string/ft_memset.c ./srcs/string/ft_substr.c ./srcs/string/ft_strncmp.c ./srcs/string/ft_strcpy.c ./srcs/string/ft_strmapi.c ./srcs/string/ft_strtrim.c ./srcs/string/ft_strndup.c ./srcs/string/ft_memmove.c ./srcs/string/ft_strlcat.c ./srcs/string/ft_strdup.c ./srcs/string/ft_strncpy.c ./srcs/string/ft_strcmp.c 
OBJS          = $(SRCS:./srcs/%.c=objs/%.o)
DEPS          = $(SRCS:./srcs/%.c=deps/%.d)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

-include $(DEPS)

objs/%.o: ./srcs/%.c
	@mkdir -p $(dir $@)
	@mkdir -p deps/$(dir $*)
	$(CC) $(CFLAGS) $(DEPFLAGS) -I $(INC_DIR) -c $< -o $@ -MF deps/$*.d

clean:
	$(RM) -r objs deps

fclean:
	$(RM) -r $(NAME) objs deps

re: fclean all

.PHONY: clean fclean re all
