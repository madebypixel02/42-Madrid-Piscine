/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:22:58 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/14 23:17:07 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_key_atoi(char *str)
{
	unsigned long	nbr;

	nbr = 0;
	while (ft_isspace(str) == 1)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			return (-1);
		str++;
	}
	while (*str != ':')
	{
		if (*str >= 48 && *str <= 57)
			nbr = (nbr * 10) + *str - '0';
		else if (ft_isspace(str) == 0)
			return (-1);
		str++;
	}
	if (nbr <= 4294967295)
		return (nbr);
	return (-1);
}

int	ft_isspace(char *str)
{
	if ((*str >= 9 && *str <= 13) || *str == ' ')
		return (1);
	return (0);
}
