/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:29:52 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/16 22:20:02 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*writestr(char *str, int decimal, unsigned int n);

static int	count_decimals(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_uitoa(unsigned int n)
{
	int		decimal;
	char	*str;

	decimal = count_decimals(n);
	str = (char *) malloc(decimal + 1);
	if (!str || n > UINT_MAX)
		return (0);
	return (writestr(str, decimal, n));
}

static char	*writestr(char *str, int decimal, unsigned int n)
{
	str[decimal--] = '\0';
	while (decimal)
	{
		str[decimal--] = n % 10 + 48;
		n = n / 10;
	}
	str[decimal] = n % 10 + 48;
	return (str);
}
