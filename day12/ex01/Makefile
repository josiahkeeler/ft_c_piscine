# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 13:22:45 by jkeeler           #+#    #+#              #
#    Updated: 2019/11/07 22:32:07 by jkeeler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = ft_cat.c libft.a
WGCC = gcc -Wextra -Wall -Werror
OBJECTS =

all: $(NAME)

$(NAME):
	$(WGCC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
