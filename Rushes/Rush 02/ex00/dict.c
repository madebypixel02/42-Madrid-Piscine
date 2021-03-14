/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 12:59:02 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/14 23:05:12 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "rush02.h"
#include <stdlib.h>

struct s_kv	*ft_create_dict(char *str, int size)
{
	struct s_kv		*dictionary;
	int				i;
	char			*ptr;
	unsigned int	key;
	int				max_len;

	dictionary = malloc(size);
	i = 0;
	ptr = str;
	max_len = ft_max_len(str);
	while (*ptr != '\0')
	{	
		if (*ptr == '\n' && *(ptr + 1) != '\0')
		{
			i++;
			key = ft_key_atoi(ptr + 1);
			dictionary[i].key = key;
		}
		ptr++;
	}
	dictionary = ft_add_values(str, dictionary, max_len);
	return (dictionary);
}

struct s_kv	*ft_add_values(char *str, struct s_kv	*dictionary, int max_len)
{
	int		i;
	int		j;

	i = 0;
	while (*(str++) != '\0')
	{
		dictionary[i].value = malloc(max_len);
		if ((*str == '\n' && *(str + 1) != '\0') || i == 0)
		{
			while (*str != ':')
				str++;
			str++;
			while (ft_isspace(str) == 1)
				str++;
			j = 0;
			while (str[j] >= 32 && str[j] <= 126)
				dictionary[i].value[j++] = str[j];
			dictionary[i].value[j] = '\0';
			i++;
		}
		free(dictionary[i].value);
	}
	return (dictionary);
}

void	ft_to_str(char *nbr, struct s_kv *dict)
{
	int	t;
	int	i;
	int	m;
	int	r;

	t = ft_strlen(nbr);
	i = 0;
	while (nbr[i] != '\0')
	{
		m = (t - i) / 3;
		r = (t - i) % 3;
		if (r == 0 && (nbr[i] != 48))
			cent(nbr, i, m, dict);
		else if (r == 1)
			millar(nbr, i, m, dict);
		else if (r == 2 && (nbr[i] != 48))
			dec(nbr, i, m, dict);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_find(int digit, struct s_kv *dict)
{
	int	i;
	int	found;

	found = 0;
	i = 0;
	while (dict[i].key != -1)
	{
		if (dict[i].key == digit && dict[i].key != -1)
		{
			found = 1;
			write(1, dict[i].value, ft_key_strlen(dict[i].value));
			break ;
		}
		i++;
	}
	if (found == 0)
	{
		write(1, "Dict Error\n", 11);
		exit(1);
	}
}
