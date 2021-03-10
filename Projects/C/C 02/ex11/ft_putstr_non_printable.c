/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:09:46 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/10 09:26:42 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_in_hex(int str, int i);

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			write(1, &"\\", 1);
			ft_print_in_hex(*str, 0);
		}
		else
			write(1, str, 1);
		str++;
	}
}

void	ft_print_in_hex(int str, int i)
{
	int remainder;

	if (i < 2)
	{
		remainder = str % 16;
		if (remainder >= 10)
			remainder += 'W';
		else
			remainder += '0';
		str /= 16;
		i++;
		ft_print_in_hex(str, i);
		write(1, &remainder, 1);
	}
}
