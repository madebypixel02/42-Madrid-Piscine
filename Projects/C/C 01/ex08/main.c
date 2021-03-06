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
#include <unistd.h>

int g_tab[10];

void	ft_sort_int_tab(int *tab, int size);

void	ft_printarray(int size);

int		main(void)
{
	int size;

	size = 10;
	g_tab[0] = 3;
	g_tab[1] = 1;
	g_tab[2] = 5;
	g_tab[3] = 3;
	g_tab[4] = 6;
	g_tab[5] = 9;
	g_tab[6] = 0;
	g_tab[7] = 2;
	g_tab[8] = 8;
	g_tab[9] = 4;
	ft_printarray(size);
	
	ft_sort_int_tab(&g_tab[0], size);
	ft_printarray(size);
}
void	ft_printarray(int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d", g_tab[i]);
		i++;
		printf(" ");
	}
	printf("\n");

}
