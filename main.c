/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:59:14 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/07 15:28:34 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
	char	ch, ch1, ch2;
	int		p;
	int		nb;

	ch = 'y';
	ch1 = 'o';
	ch2 = 'u';
	nb = 0xf;
	p = printf("%p", &nb);
	printf("\n%d", p);
	return (0);
}
