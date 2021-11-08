/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:59:14 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/08 20:43:06 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	ch;
	int		p;
	int		nb;
	char	*str;

	ch = 'y';
	nb = 0xf;
	str = "hey";
	p = ft_printf("%s", str);
	printf("\n%d", p);
	return (0);
}
