/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lengths.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:29:30 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/14 23:16:28 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "rush02.h"

int	ft_key_strlen(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		if (ft_isspace(&str[i]) == 0 && str[i] >= 32 && str[i] <= 126)
			len++;
		i++;
	}
	return (len);
}

int	ft_max_len(char *str)
{
	int	i;
	int	max_len;

	max_len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ':')
		{
			if (ft_key_strlen(&str[i + 1]) > max_len)
				max_len = ft_key_strlen(&str[i + 1]);
		}
		i++;
	}
	return (max_len);
}

int	ft_nbrlen(int nbr)
{
	int	count;

	count = 0;
	while (nbr > 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
			i++;
		else
			return (0);
	}
	return (i);
}

int	ft_count_lines(char *str)
{
	int	nlines;
	int	i;

	i = 0;
	nlines = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			nlines++;
		i++;
	}
	return (nlines);
}
