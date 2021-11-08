/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:59:24 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/08 16:10:38 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_p(t_format *fmt, t_holder *holder)
{
	void	*ptr;
	char	*str;

	ptr = (void *)va_arg(fmt->arg, void *);
	str = ft_itoa_base((unsigned long) ptr, "0123456789abcdef");
	holder->argument = ft_strjoin("0x", str);
	holder->len = ft_strlen(holder->argument);
	free (str);
}
