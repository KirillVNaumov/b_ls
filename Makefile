# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndanilov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/29 21:14:54 by ndanilov          #+#    #+#              #
#    Updated: 2018/10/12 13:34:36 by knaumov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES = -I includes
SRCS = ./srcs/*
UTILS = ./utils/*
NAME = libft.a

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) $(UTILS) $(INCLUDES) -c
	ar rc $(NAME) *.o
	ranlib $(NAME)
	gcc -Wall -Wextra -Werror $(NAME) $(INCLUDES) main.c -o b_ls

all: $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f b_ls

re: fclean all

leaks: fclean
	gcc -g ./srcs/*.c ./utils/*.c -I includes main.c -o b_ls
