/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_xX.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:17:46 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/07 13:34:31 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_x(t_format *fmt, t_holder *holder)
{

}

static void	ft_putnbr_base(int nbr, char *base)
{
	int		b;
	int		i;
	int		mod;
	char	res[13];

	b = ft_strlen(base);
	i = 0;
	if (ft_strlen(base) && ft_strcmp(base))
	{
		nbr = ft_ifneg(nbr);
		while (nbr != 0)
		{
			mod = nbr % b;
			nbr = nbr / b;
			res[i] = base[mod];
			i++;
		}
		res[i] = '\0';
		ft_revputstr(res);
	}
}
