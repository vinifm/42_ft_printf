/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:24:06 by viferrei          #+#    #+#             */
/*   Updated: 2021/10/22 19:11:30 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
	Allocates memory and initializes the values of all the members in the
	structs t_format and t_holder.
*/

t_format	*ft_init_format(const char *format, va_list arg)
{
	t_format	*fmt;

	fmt = malloc(sizeof(t_format));
	if (!fmt)
		return(NULL);
	fmt->format = format;
	fmt->index = 0;
	va_copy(fmt->arg, arg);
	fmt->len = 0;

	return (fmt);
}

t_holder	*ft_init_holder(void)
{
	t_holder	*holder;

	holder = malloc(sizeof(t_holder));
	if (!holder)
		return(NULL);
	holder->argument = NULL;
	holder->specifier = '\0';
	holder->len = 0;
}
