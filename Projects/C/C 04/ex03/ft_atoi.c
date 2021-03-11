/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 18:08:25 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/10 19:32:23 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_check_sign(char *str);

int		ft_atoi(char *str)
{
	char sign;
	sign = ft_check_sign(str);
	while ()
	{
		
	}
	
}

char	ft_check_sign(char *str)
{
	int count;

	count = 0;
	while ((*str == '-' || *str == '+' || *str == ' ') && *str != '\0')
	{
		if (*str == '-')
			count++;
		str++;
	}
	printf("%d", count);
	if (count % 2 == 0)
		return ('+');
	else
		return ('-');
}
