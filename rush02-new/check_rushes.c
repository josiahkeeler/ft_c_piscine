/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rushes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:44:50 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/10 21:41:27 by mlopes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	check_column(char *pieces, int x, char *str, int col_count)
{
	int end_row;
	int start_row;

	start_row = x;
	end_row = x + col_count;
	while (x < end_row)
	{
		if (x == start_row && str[x] != pieces[0])
				return (0);
	 	else if (x == end_row - 1 && str[x] != pieces[2])
			return (0);
		else if (str[x] != pieces[1] && x > start_row && x < end_row - 1)
			return (0);
		x++;
	}
	return (1);
}

int check_rush00(int col_count, int row_count, char *str)
{
	int x;
	int y;
	char top[3] = {'o', '-', 'o'};
	char bot[3] = {'o', '-', 'o'};
	char mid[3] = {'|', ' ', '|'};

	x = 0;
	y = 0;
	while(y < row_count)
	{
		if (y == 0 && check_column(top, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else if (y != row_count - 1 && check_column(mid, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else if (y == row_count - 1 && check_column(bot, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else
			return (0);
	}
	return (1);
}

int check_rush01(int col_count, int row_count, char *str)
{
	int x;
	int y;
	char top[3] = {'/', '*', '\\'};
	char bot[3] = {'\\', '*', '/'};
	char mid[3] = {'*', ' ', '*'};

	x = 0;
	y = 0;
	while(y < row_count)
	{
		if (y == 0 && check_column(top, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else if (y != row_count - 1 && check_column(mid, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else if (y == row_count - 1 && check_column(bot, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else
			return (0);
	}
	return (1);
}

int check_rush02(int col_count, int row_count, char *str)
{
	int x;
	int y;
	char top[3] = {'A', 'B', 'A'};
	char bot[3] = {'C', 'B', 'C'};
	char mid[3] = {'B', ' ', 'B'};

	x = 0;
	y = 0;
	while(y < row_count)
	{
		if (y == 0 && check_column(top, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else if (y != row_count - 1 && check_column(mid, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else if (y == row_count - 1 && check_column(bot, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else
			return (0);

	}
	return (1);
}

int check_rush03(int col_count, int row_count, char *str)
{
	int x;
	int y;
	char top[3] = {'A', 'B', 'C'};
	char bot[3] = {'A', 'B', 'C'};
	char mid[3] = {'B', ' ', 'B'};

	x = 0;
	y = 0;
	while(y < row_count)
	{
		if (y == 0 && check_column(top, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else if (y != row_count - 1 && check_column(mid, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else if (y == row_count - 1 && check_column(bot, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else
			return (0);
	}
	return (1);
}

int check_rush04(int col_count, int row_count, char *str)
{
	int x;
	int y;
	char top[3] = {'A', 'B', 'C'};
	char bot[3] = {'C', 'B', 'A'};
	char mid[3] = {'B', ' ', 'B'};

	x = 0;
	y = 0;
	while(y < row_count)
	{
		if (y == 0 && check_column(top, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else if (y != row_count - 1 && check_column(mid, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else if (y == row_count - 1 && check_column(bot, x, str, col_count))
		{
			y++;
			x = y * (col_count + 1);
		}
		else
			return (0);
	}
	return (1);
}
