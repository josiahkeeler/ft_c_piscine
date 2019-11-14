/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op_header.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeeler <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:14:03 by jkeeler           #+#    #+#             */
/*   Updated: 2019/11/05 22:14:05 by jkeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_HEADER_H
# define DO_OP_HEADER_H
# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_str_is_alpha(char *str);
char	*ft_strcapitalize(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strupcase(char *str);
void	ft_swap(int *a, int *b);
int		add(int x, int y);
int		sub(int x, int y);
int		mult(int x, int y);
int		div(int x, int y);
int		mod(int x, int y);

#endif
