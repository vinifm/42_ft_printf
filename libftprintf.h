/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:40:36 by viferrei          #+#    #+#             */
/*   Updated: 2021/10/22 19:08:10 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include "./libft/libft.h"

typedef struct	s_format
{
	char	*format;
	int		index;
	va_list	arg;
	size_t	len;
}	t_format;

typedef struct	s_holder
{
	char	*argument;
	char	specifier;
	size_t	len;
}	t_holder;

int			ft_printf(const char *format, ...);
int			ft_vprintf(const char *format, va_list arg);

t_format	*ft_init_format(const char *format, va_list arg);
t_holder	*ft_init_holder(void);
void		ft_placeholder(t_format *fmt);

#endif
