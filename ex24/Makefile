# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 02:44:46 by amehmeto          #+#    #+#              #
#    Updated: 2016/11/15 13:15:29 by amehmeto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Definition des cibles particulieres
.PHONY: all clean fclean re $(NAME) 

#Definition des variables
NAME = libft.a
FILE = ft_putstr.c ft_putchar.c ft_strlen.c ft_swap.c ft_strcmp.c
OBJ = $(FILE:.c=.o)
CC = gcc
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: srcs/%.c
	$(CC) -c $< $(FLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
