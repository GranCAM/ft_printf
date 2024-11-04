NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunsnbr.c ft_puthex.c ft_puthexupper.c ft_putmem.c 				

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	ar crs $(NAME) $(OBJS) 

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean