/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_to_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 16:13:30 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/10 16:14:54 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*stdin_to_str(void)
{
	int i;
	char *str;
	char c;
	char *temp;

	i = 1;
	c = '0';
	str = (char*)malloc(sizeof(char));
	str[0] = 0;
	while(read(0, &c, 1) != '\0')
	{
		temp = (char*)malloc(sizeof(char) * (i + 1));
		ft_strcpy(temp, str);
		free(str);
		str = temp;
		str[i - 1] = c;
		str[i] = 0;
		i++;
	}
	return (str);
}
