/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzhang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 09:34:35 by luzhang           #+#    #+#             */
/*   Updated: 2019/11/10 22:21:44 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	rush(int x, int y);

int		main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc != 3)
	{
		printf("please put two dimensions.\n");
		return (0);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	rush(x, y);
	return (0);
}
