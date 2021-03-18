/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:25:16 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/18 20:45:03 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		diff;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
		
	diff = max - min;
	range = (int **)malloc(diff * 8);
	i = 0;
	while (i < diff)
	{
		range[0][i] = *(int *)malloc(4);
		range[0][i] = min + i;
		i++;
	}
	return (diff);
}

#include <stdio.h>

int main()
{
	int **range;
	ft_ultimate_range(range, 1, 10);
	printf("%d", range[0]);
}