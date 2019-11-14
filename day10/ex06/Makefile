# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 13:22:45 by jkeeler           #+#    #+#              #
#    Updated: 2019/11/05 13:22:47 by jkeeler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = do-op.c operations.c ./srcs/ft_atoi.c ./srcs/ft_putnbr.c\
	./srcs/ft_putstr.c ./srcs/ft_putchar.c
INCLUDES =
OBJECTS = ft_atoi.o ft_putnbr.o ft_putstr.o do-op.o operations.o
WGCC = gcc -Wextra -Wall -Werror

all: $(NAME)

$(NAME):
	$(WGCC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJECTS)
