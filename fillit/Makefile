# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asosnov <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 16:22:39 by asosnov           #+#    #+#              #
#    Updated: 2016/11/10 16:22:40 by asosnov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = fillit
CFLAGS = -Wall -Wextra -Werror
SRC_NAME = fillit_1.c fillit_2.c fillit_3.c fillit_4.c
OBJ_NAME = $(SRC_NAME:.c=.o)

.PHONY: clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC_NAME) -L./lib -lft

norme:
	norminette $(SRC_NAME)

clean:
	rm -f $(OBJ_NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all


