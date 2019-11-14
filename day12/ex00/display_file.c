/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:34:29 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/07 20:09:01 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(char *file)
{
	int		file_des;
	char	c;

	file_des = open(file, O_RDONLY);
	while (read(file_des, &c, 1) != '\0')
		write(1, &c, 1);
	close(file_des);
}

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		if (argc == 1)
			write(2, "File name missing.\n", 19);
		else if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	display_file(argv[1]);
	return (0);
}
