/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:17:30 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/17 11:25:29 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int		ft_check_map(char *map_str)
{
	char	*characters;
	int		nlines;

	nlines = ft_atoi(map_str, ft_count_chars(map_str, 0) - 3);
	characters = ft_get_chararray(map_str);
	if (ft_check_params(nlines, characters) == 1)
		return (1);
	if (ft_check_values(map_str, nlines, characters) == 1)
		return (1);
	if (ft_nbrlen(nlines) + 3 != ft_count_chars(map_str, 0))
		return (1);
	return (0);
}

int		ft_check_params(int nlines, char *chrs)
{
	int i;

	i = 0;
	if (nlines == -1)
		return (1);
	if (chrs[0] == chrs[1] || chrs[0] == chrs[2] || chrs[1] == chrs[2])
		return (1);
	while (i < 3)
	{
		if (chrs[i] < 32 || chrs[i] > 126)
			return (1);
		i++;
	}
	return (0);
}

int		ft_check_values(char *map, int nlines, char *c)
{
	int i;
	int line;
	int init_line_size;

	init_line_size = ft_count_chars(map, 1);
	line = 0;
	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == '\n' && map[i + 1] != '\0')
		{
			line++;
			if (ft_count_chars(map, line) != init_line_size)
				return (1);
		}
		if (line > 0 && map[i] != '\n')
		{
			if (map[i] != c[0] && map[i] != c[1])
				return (1);
		}
		i++;
	}
	if (line != nlines)
		return (1);
	return (0);
}

int		ft_count_chars(char *map_str, int line)
{
	int curr_line;
	int i;
	int char_count;

	char_count = 0;
	curr_line = 0;
	i = 0;
	while (map_str[i] != '\0')
	{
		if (map_str[i] == '\n')
			curr_line++;
		if (curr_line == line && map_str[i] != '\n')
			char_count++;
		i++;
	}
	return (char_count);
}

char	*ft_get_chararray(char *map_str)
{
	char	*characters;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 2;
	ptr = (char *)malloc(4);
	characters = ptr;
	while (map_str[i] != '\n')
		i++;
	while (j >= 0)
		characters[j--] = map_str[--i];
	characters[3] = '\0';
	free(ptr);
	return (characters);
}
