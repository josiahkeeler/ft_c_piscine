/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:05:42 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/08 10:11:49 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "jk_header.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void	errno_check1(char *file)
{
	if (errno == 21)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(file);
		ft_putstr(": Is a directory\n");
		return ;
	}
	if (errno == 13)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(file);
		ft_putstr(": Permission denied\n");
		return ;
	}
	if (errno == 2)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(file);
		ft_putstr(": No such file or directory\n");
		return ;
	}
}

void	errno_check2(char *file)
{
	if (errno == 13)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(file);
		ft_putstr(": Permission denied\n");
		return ;
	}
}

void	file_to_stdout(char *file)
{
	int		file_des;
	char	c;

	file_des = open(file, O_RDWR);
	if (errno != 0)
	{
		errno_check1(file);
		errno_check2(file);
		return ;
	}
	while (read(file_des, &c, 1) != '\0')
		write(1, &c, 1);
	close(file_des);
}

void	echo_chamber(void)
{
	char c;

	while (read(0, &c, 1) != '\0')
		write(1, &c, 1);
	close(0);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
	{
		echo_chamber();
		return (0);
	}
	while (i < argc)
		file_to_stdout(argv[i++]);
	return (0);
}
