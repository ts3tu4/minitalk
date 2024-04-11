# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 16:11:44 by mnanke            #+#    #+#              #
#    Updated: 2023/06/18 16:59:46 by mnanke           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_isalpha.c		\
		ft_isdigit.c		\
	 	ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_strlen.c			\
		ft_memset.c			\
		ft_bzero.c			\
		ft_memcpy.c			\
		ft_memmove.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c			\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_strnstr.c		\
		ft_atoi.c			\
		ft_calloc.c			\
		ft_strdup.c			\
		ft_substr.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_split.c			\
		ft_itoa.c			\
		ft_strmapi.c		\
		ft_striteri.c		\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c
		
BSRCS =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BSRCS:.c=.o)

ifdef WITH_BONUS
OBJS += $(BONUS_OBJS)
endif

CC = gcc

CFLAGS = -Wall -Wextra -Werror

# #debug
# NAME_DEBUG = libft_debug.a
# debug: $(NAME_DEBUG)
# $(NAME_DEBUG): $(OBJS)
# 	ar rc $@ $^
# 	ranlib $@
# $(OBJS): %.o: %.c
# 	gcc -Wall -Wextra -Werror -g -c $< -o $@


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


bonus:
	make all WITH_BONUS=1

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)
	
fclean: clean
	rm -rf $(NAME) $(NAME_DEBUG)
	
re: fclean all

.PHONY:	all clean fclean re
