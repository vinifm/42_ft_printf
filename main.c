/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:59:14 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/07 13:34:29 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
	char	ch, ch1, ch2;
	int		p;
	int		nb;
	int		*ptr;

	ch = 'y';
	ch1 = 'o';
	ch2 = 'u';
	nb = 0x613A;
	ptr = &nb;
	p = printf("%d", nb);
	printf("\n%d", p);

	return (0);
}

/*

0 - 7 x	8^0 = 1		4x1 =  4
		8^1 = 8		2x8 = 16
		8^2 = 64		  20
*/
