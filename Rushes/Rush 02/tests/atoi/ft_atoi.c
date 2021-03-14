/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:22:58 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/13 16:26:26 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspce(char *str);

int		ft_atoi(char *str)
{
	int		nbr;
	char	sign;

	nbr = 0;
	sign = '+';
	while (ft_isspce(str) == 1)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = '-';
		str++;
	}
		
	while (*str >= 48 && *str <= 57)
	{
		nbr = (nbr * 10) + *str - '0';
		str++;
	}
	if (sign == '-')
		return (-nbr);
	else
		return (nbr);
}

int		ft_isspce(char *str)
{
	if ((*str >= 9 && *str <= 13) || *str == ' ')
		return (1);
	return (0);
}