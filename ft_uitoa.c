/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:29:52 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/04 11:12:22 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*writestr(char *str, int decimal, int n);

static int	count_decimals(int n)
{
	int	count;
	int	minus;

	count = 0;
	minus = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		minus = 1;
		n = -n;
	}
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count + minus);
}

char	*ft_uitoa(unsigned int n)
{
	int		decimal;
	char	*str;

	decimal = count_decimals(n);
	str = (char *) malloc(decimal + 1);
	if (!str || n > UINT_MAX || n < 0)
		return (0);
	return (writestr(str, decimal, n));
}

static char	*writestr(char *str, int decimal, int n)
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
