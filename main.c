/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viferrei <viferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:59:14 by viferrei          #+#    #+#             */
/*   Updated: 2021/11/04 11:09:45 by viferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int main(void)
{
	char	ch, ch1, ch2;
	int		p;
	unsigned int		nb;

	ch = 'y';
	ch1 = 'o';
	ch2 = 'u';
	nb = 4294967295;
	p = ft_printf("hello%u\n", nb);
	printf("%d", p);

	return (0);
}
