/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholder.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:46:38 by viferrei          #+#    #+#             */
/*   Updated: 2021/10/22 19:11:33 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
	FT_PLACEHOLDER
	Sends the argument to be formatted to the appropriate conversion function.

*/

void ft_placeholder(t_format *fmt)
{
	t_holder	*holder;

	fmt->index++;
	holder = ft_init_holder();
	if (fmt->format[fmt->index] == 'c')
		ft_convert_c();
}
