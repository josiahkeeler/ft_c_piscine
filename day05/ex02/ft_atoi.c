/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 18:53:52 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/29 21:08:51 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int index;
	int sign;
	int num;

	index = 0;
	num = 0;
	sign = 1;
	while (str[index] == '\t' || str[index] == '\n' || str[index] == '\v' ||
			str[index] == '\f' || str[index] == '\r' || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		num = num * 10 + (str[index] - '0');
		index++;
	}
	return (num * sign);
}
