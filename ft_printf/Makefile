NAME = libftprintf.a

SRCS = ft_printf.c\
		ft_putnbr.c\
		ft_putchar.c\
		ft_putnbr_sixteen.c\
		ft_putnbr_unsigned.c\
		ft_putstr.c\
		ft_strlen.c

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

# #debug
# NAME_DEBUG = libftprintf_debug.a
# debug: $(NAME_DEBUG)
# $(NAME_DEBUG): $(OBJS)
# 	ar rc $@ $^
# 	ranlib $@
# $(OBJS): %.o: %.c
# 	gcc -Wall -Wextra -Werror -g -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

clean:
	rm -rf $(OBJS)


fclean: clean
	rm -rf $(NAME) $(NAME_DEBUG)

re: fclean all

.PHONY: all clean fclean re
