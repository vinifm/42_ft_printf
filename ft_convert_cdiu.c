/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:34:49 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/04 11:14:55 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_c(t_format *fmt, t_holder *holder)
{
	char	c;

	c = (int)va_arg(fmt->arg, int);
	holder->argument = malloc(sizeof(char));
	if (!holder->argument)
		return ;
	holder->argument[0] = c;
	holder->len = 1;
}

void	ft_convert_di(t_format *fmt, t_holder *holder)
{
	int		d;
	char	*str;
	size_t	s_len;

	d = (int)va_arg(fmt->arg, int);
	str = ft_itoa(d);
	s_len = ft_strlen(str);
	holder->argument = malloc(s_len);
	if (!holder->argument)
		return ;
	holder->argument = str;
	holder->len = s_len;
}

void	ft_convert_u(t_format *fmt, t_holder *holder)
{
	unsigned int	u;
	char			*str;
	size_t			s_len;

	u = (int)va_arg(fmt->arg, unsigned int);
	str = ft_uitoa(u);
	s_len = ft_strlen(str);
	holder->argument = malloc(s_len);
	if(!holder->argument)
		return ;
	holder->argument = str;
	holder->len = s_len;
}
