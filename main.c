/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:59:14 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/03 14:44:46 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
	char	ch;
	char	cha;
	int		p;
	int		nb;

	ch = 'y';
	cha = 'o';
	nb = 489;
	p = ft_printf("he%c\n", ch);
	printf("%d", p);

	return (0);
}
