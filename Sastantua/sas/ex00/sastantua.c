/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 20:11:06 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/09 12:46:52 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		find_width(int size)
{
	int width;
	int level;

	width = 3;
	level = 1;
	while (level < size)
	{
		width = width + (level + 1) * 2;
		width = width + (3 + (level / 3)) * 2;
		level++;
	}
	width = width + (level + 1) * 2;
	return (width);
}

void	print_py(int line_width)
{
	int counter;

	counter = 0;
	while (counter <= line_width)
	{
		ft_putchar('/' * (counter == 0));
		ft_putchar('*' * (counter > 1 && counter < line_width));
		ft_putchar(92 * (counter == line_width));
		counter++;
	}
	ft_putchar('\n');
}

void	print_space(int size, int line_width)
{
	int white;
	int counter;

	counter = 0;
	white = (find_width(size) - line_width) / 2;
	while (counter <= white)
	{
		ft_putchar(' ');
		counter++;
	}
}

void	print_loop(int size, int width)
{
	int level;
	int bot_width;
	int line_width;

	level = 0;
	line_width = 3;
	while (line_width <= width)
	{
		level++;
		bot_width = line_width + (level + 1) * 2;
		while (line_width <= bot_width)
		{
			print_space(size, line_width);
			print_py(line_width);
			line_width += 2;
		}
		line_width = bot_width + (3 + (level / 3)) * 2;
	}
}

void	sastantua(int size)
{
	int width;

	width = find_width(size);
	print_loop(size, width);
}

#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	sastantua(atoi(argv[1]));
	return (0);
}
