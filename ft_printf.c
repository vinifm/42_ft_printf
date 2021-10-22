/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:48:08 by viferrei          #+#    #+#             */
/*   Updated: 2021/10/22 19:12:05 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	size_t		len;

	va_start(arg, format);
	len = ft_vprintf(format, arg);
	va_end(arg);
	return (len);
}

int	ft_vprintf(const char *format, va_list arg)
{
	size_t		len;
	t_format	*fmt;

	fmt = ft_init_format(format, arg);
	while(fmt->format[fmt->index] != '\0')
	{
		if (fmt->format[fmt->index] == '%')
			ft_placeholder(fmt);
		fmt->index++;
	}
	len = fmt->len;
	return (len);
}
