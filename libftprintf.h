/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:40:36 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/03 14:50:48 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include "./libft/libft.h"

/*
EXCLUIR DEPOIS
*/
#include <stdio.h>
#include <wchar.h>

typedef struct	s_format
{
	char	*format;
	int		index;
	va_list	arg;
	int		len;
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

void		ft_placeholder(t_format *fmt, t_holder *holder);
void		ft_specifier(t_format *fmt, t_holder *holder);
void		ft_conversions(t_format *fmt, t_holder *holder);

/* CONVERSIONS */
void		ft_convert_c(t_format *fmt, t_holder *holder);

#endif
