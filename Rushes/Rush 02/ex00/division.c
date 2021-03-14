/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   division.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 20:14:00 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/14 23:22:04 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush02.h"

void	ft_find(int digit, struct s_kv *dict);

void	millar(char *str, int i, int m, struct s_kv *dict)
{
	int	n;

	if ((str[i] != 48) && (str[i - 1] != 49))
	{
		if (i != 0)
			write(1, " ", 1);
		ft_find(str[i] - 48, dict);
	}
	if (m == 1)
	{
		write(1, " ", 1);
		ft_find(1000, dict);
	}
	if (m >= 2)
	{
		n = 1;
		while (m > 0)
		{
			n = n * 1000;
			m--;
		}
		write(1, " ", 1);
		ft_find(n, dict);
	}
}

void	cent(char *str, int i, int m, struct s_kv *dict)
{
	if ((str[i] != 48))
	{
		if (i != 0)
			write(1, " ", 1);
		ft_find(str[i] - 48, dict);
	}
	write(1, " ", 1);
	ft_find(100, dict);
}

void	dec(char *str, int i, int m, struct s_kv *dict)
{
	if (str[i] != 49)
	{
		if (i != 0)
			write(1, " ", 1);
		ft_find((str[i] - 48) * 10, dict);
	}
	else if (str[i] == 49)
		ft_find((str[i + 1] - 48) + 10, dict);
}
