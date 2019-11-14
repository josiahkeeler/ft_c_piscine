/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:13:55 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/26 21:27:08 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int temp;

	temp = 1;
	if (power > 0)
	{
		temp = nb * ft_recursive_power(nb, power - 1);
	}
	if (power < 0)
	{
		temp = 0;
	}
	return (temp);
}
