/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 16:36:07 by jkeeler           #+#    #+#             */
/*   Updated: 2019/10/26 21:27:45 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int temp;

	temp = 1;
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 1 || index == 0)
	{
		return (index);
	}
	else
	{
		return (temp = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
