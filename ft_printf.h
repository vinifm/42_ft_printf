/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:40:36 by viferrei          #+#    #+#             */
/*   Updated: 2022/01/29 17:20:11 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_format
{
	char	*format;
	int		index;
	va_list	arg;
	int		len;
}	t_format;

typedef struct s_holder
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
void		ft_convert_di(t_format *fmt, t_holder *holder);
void		ft_convert_u(t_format *fmt, t_holder *holder);
void		ft_convert_s(t_format *fmt, t_holder *holder);
void		ft_convert_percent(t_holder *holder);
void		ft_convert_p(t_format *fmt, t_holder *holder);
void		ft_convert_x(t_format *fmt, t_holder *holder);

/* AUXILIARIES */
char		*ft_itoa_base(unsigned long nbr, char *base);

#endif
