/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 15:30:31 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/26 16:12:56 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int temp;

	temp = 1;
	while (power > 0)
	{
		temp = temp * nb;
		power--;
	}
	if (power < 0)
	{
		temp = 0;
	}
	return (temp);
}
