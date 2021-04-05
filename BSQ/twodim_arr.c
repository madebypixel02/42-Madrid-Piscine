/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twodim_arr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 16:04:29 by rvaldes-          #+#    #+#             */
/*   Updated: 2021/03/18 08:04:33 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

char	**ft_twodim_arr(char *p, int line, int line_size)
{
	char	**main_tab;
	int		i;
	int		j;
	int		t;

	t = ft_count_chars(p, 0) + 1;
	main_tab = (char **)malloc(8 * line);
	i = 0;
	while (i < line)
	{
		main_tab[i] = (char *)malloc(line_size);
		j = 0;
		while (j < line_size)
		{
			main_tab[i][j] = p[t];
			j++;
			t++;
		}
		i++;
		t++;
	}
	return (main_tab);
}
