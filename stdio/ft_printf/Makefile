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

GREEN = \e[38;5;118m
YELLOW = \e[38;5;226m
RESET = \e[0m
_SUCCESS = [$(GREEN)SUCCESS$(RESET)]
_INFO = [$(YELLOW)INFO$(RESET)]

all: $(NAME)

$(NAME): $(OBJS)
	@ ar rc $(NAME) $(OBJS)
	@printf "$(_SUCCESS) DONE MAKE ft_printf\n"

.c.o: $(OBJS)
	@ $(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $@

clean:
	@ $(RM) $(OBJS) $(B_SRCS:.c=.o)
	@printf "$(_INFO) CLEAN ft_printf\n"

fclean: clean
	@ $(RM) $(NAME)
	@printf "$(_INFO) REMOVE libftprintf.a\n"

re: fclean all

.PHONY: clean fclean re all