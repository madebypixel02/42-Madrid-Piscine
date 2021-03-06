/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:47:17 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/03 12:47:20 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 120;
	b = 42;
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d\nb: %d\n\nDivision: %d\nRemainder: %d", a, b, div, mod);
}
