NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

INCLUDE = 'ft_printf.h'

SRCS = ft_printf.c \
		ft_format.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putptr.c \
		ft_putnbr.c \
		ft_putunbr.c \
		ft_puthex.c \
		ft_putbinary.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

.c.o: $(OBJS)
	$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

clean:
	$(RM) $(OBJS) $(B_SRCS:.c=.o)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all