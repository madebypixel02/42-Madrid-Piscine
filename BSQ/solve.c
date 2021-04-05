/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:51:05 by rvaldes-          #+#    #+#             */
/*   Updated: 2021/03/16 13:40:41 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

void	ft_print_matrix(int line, int line_size, char **main_tab)
{
	int i;
	int j;

	i = 0;
	while (i < line)
	{
		j = 0;
		while (j < line_size)
		{
			write(1, &main_tab[i][j], 1);
			j++;
		}
		write(1, &"\n", 1);
		i++;
	}
}

int		ft_find_obstacles(int *coord, int k, char **main_tab, char *file_arr)
{
	int		j_0;
	int		i_0;

	i_0 = coord[0];
	while (i_0 < coord[0] + k)
	{
		j_0 = coord[1];
		while (j_0 < coord[1] + k)
		{
			if (main_tab[i_0][j_0] == ft_get_chararray(file_arr)[1])
				return (1);
			j_0++;
		}
		i_0++;
	}
	ft_fill(coord, k, main_tab, file_arr);
	return (0);
}

int		ft_min(int lines, int line_size)
{
	if (lines <= line_size)
		return (lines);
	else
		return (line_size);
}

int		ft_squares(int lines, int line_size, char **main_tab, char *file_arr)
{
	int k;
	int i;
	int j;
	int coord[2];

	k = ft_min(lines, line_size);
	while (k > 0)
	{
		i = 0;
		while (i <= lines - k)
		{
			j = 0;
			while (j <= line_size - k)
			{
				coord[0] = i;
				coord[1] = j;
				if (ft_find_obstacles(coord, k, main_tab, file_arr) == 0)
					return (0);
				j++;
			}
			i++;
		}
		k--;
	}
	return (0);
}

void	ft_fill(int *coord, int k, char **main_tab, char *file_arr)
{
	char	*characters;
	int		i_0;
	int		j_0;

	i_0 = coord[0];
	characters = ft_get_chararray(file_arr);
	while (i_0 < coord[0] + k)
	{
		j_0 = coord[1];
		while (j_0 < coord[1] + k)
		{
			main_tab[i_0][j_0] = characters[2];
			j_0++;
		}
		i_0++;
	}
}
