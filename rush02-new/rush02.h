/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 14:55:11 by gkhodizo          #+#    #+#             */
/*   Updated: 2019/11/10 14:55:13 by gkhodizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		col_count(char *str);
int		row_count(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_result(char *str, int a, int b);
int 	check_rows(int col_count, int row_count, char *str);
int		check_column(char *pieces, int x, char *str, int col_count);
char	*stdin_to_str(void);
int 	check_rush00(int col_count, int row_count, char *str);
int 	check_rush01(int col_count, int row_count, char *str);
int 	check_rush02(int col_count, int row_count, char *str);
int 	check_rush03(int col_count, int row_count, char *str);
int 	check_rush04(int col_count, int row_count, char *str);
char 	*ft_strcpy(char *dest, char *src);
void	ft_putnbr(int nb);
void	ft_check01(char *input, int *array);
void	ft_check02(char *input, int *array);

#endif
