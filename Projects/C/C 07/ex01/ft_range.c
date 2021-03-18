/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:09:53 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/18 19:20:25 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*str;
	int		i;
	int		diff;

	if (min >= max)
		return ((void *)0);
	diff = max - min;
	str = (int *)malloc(diff * 4);
	i = 0;
	while (i < diff)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
