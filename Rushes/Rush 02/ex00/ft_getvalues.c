/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getvalues.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:29:30 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/14 10:57:04 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isspce(char *str);

int		ft_strlen(char *str);

int		ft_max_len(char *str);

int		ft_getvalues(char *str)
{
	int	nbr;

	nbr = 0;
	return (nbr);
}

int		ft_strlen(char *str)
{
	char *ptr;
	int len;
	int i;

	len = 0;
	i= 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		if (ft_isspce(&str[i]) == 0 && str[i] >= 32 && str[i] <= 126)
			len++;
		i++;
	}
	return (len);
}

int		ft_max_len(char *str)
{
	int i;
	int max_len;

	max_len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ':')
		{
			if (ft_strlen(&str[i + 1]) > max_len)
				max_len = ft_strlen(&str[i + 1]);
		}
		i++;
	}
	return (max_len);
}
