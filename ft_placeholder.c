/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:46:38 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/03 15:01:36 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
	FT_SPECIFIER
	Checks if the type passed to "%" is a valid type specifier and saves it to
	holder->specifier.

	FT_PLACEHOLDER
	Sends the argument to be formatted to the appropriate conversion function.

*/

void ft_placeholder(t_format *fmt, t_holder *holder)
{
	fmt->index++;
	ft_specifier(fmt, holder);
	if (holder->specifier)
	{
		ft_conversions(fmt, holder);
		fmt->len += write(1, holder->argument, holder->len);
		free(holder->argument);
	}
}

void	ft_specifier(t_format *fmt, t_holder *holder)
{
	if (ft_strchr("cspdiuxX%", fmt->format[fmt->index]))
		holder->specifier = fmt->format[fmt->index];
	else
		fmt->len += write(1, &fmt->format[fmt->index], 1);
	fmt->index++;
}

void	ft_conversions(t_format *fmt, t_holder *holder)
{
	if (holder->specifier == 'c')
		ft_convert_c(fmt, holder);
}
