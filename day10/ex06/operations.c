/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:08:43 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/05 22:08:44 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/do_op_header.h"

int	add(int x, int y)
{
	return (x + y);
}

int	sub(int x, int y)
{
	return (x - y);
}

int	mult(int x, int y)
{
	return (x * y);
}

int	div(int x, int y)
{
	return (x / y);
}

int	mod(int x, int y)
{
	return (x % y);
}
