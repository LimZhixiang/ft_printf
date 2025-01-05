# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zhilim <zhilim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 10:47:50 by jechoo            #+#    #+#              #
#    Updated: 2025/01/05 17:59:50 by zhilim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_putchar.c ft_putstr.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putunnbr.c ft_printf.c
SRCS_PATH = ./srcs
OBJS_PATH = ./objs

OBJECTS = $(patsubst %.c, $(OBJS_PATH)/%.o, $(SOURCES))

CC = gcc -g
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.c
	mkdir -p $(OBJS_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS_PATH)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
