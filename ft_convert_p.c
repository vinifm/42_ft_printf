/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:59:24 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/05 17:08:06 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_p(t_format *fmt, t_holder *holder)
{
	char	*ptr;

	ptr = (char *)va_arg(fmt->arg, char *);
	holder->argument = malloc(sizeof(char *));
	if (!holder->argument)
		return ;
}
