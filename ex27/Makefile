# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/15 02:10:14 by amehmeto          #+#    #+#              #
#    Updated: 2016/11/17 04:48:07 by amehmeto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Definition des cibles particulieres
.PHONY: all clean fclean re $(NAME) 

#Definition des variables
NAME = $(FILE:.c=)
FILE = ft_display_file.c
OBJ = $(FILE:.c=.o)
CC = gcc
FLAGS = -Wall -Werror -Wextra

all:
	$(CC) $(FLAGS) $(FILE) -o $(NAME)
#$(NAME): $(OBJ)
#	ar rc $(NAME) $(OBJ)
#	ranlib $(NAME)

#%.o: srcs/%.c
#	$(CC) -c $< $(FLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean 
	rm -rf $(NAME)
	rm -rf a.out
	rm -rf .*.swp

re: fclean all

