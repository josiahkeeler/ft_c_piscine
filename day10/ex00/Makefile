# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 18:57:34 by jkeeler           #+#    #+#              #
#    Updated: 2019/11/04 19:27:12 by jkeeler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c ./srcs/ft_swap.c
INCLUDES = /includes
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
WGCC = gcc -Wextra -Wall -Werror
all:	$(NAME)

$(NAME):
	$(WGCC) -c -I $(INCLUDES) $(SRC)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean: $(NAME)
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
