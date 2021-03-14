/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:22:58 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/14 23:17:37 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_input_atoi(char *str)
{
	unsigned long	nbr;

	nbr = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			return (-1);
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
			nbr = (nbr * 10) + *str - '0';
		else
			return (-1);
		str++;
	}
	if (nbr <= 4294967295)
		return (nbr);
	return (-1);
}
