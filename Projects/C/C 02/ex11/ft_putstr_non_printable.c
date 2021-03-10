/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:09:46 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/10 12:41:26 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_in_hex(int str);

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			write(1, &"\\", 1);
			if (*str < 16)
				write(1, &"0", 1);
			ft_print_in_hex(*str);
		}
		else
			write(1, str, 1);
		str++;
	}
}

void	ft_print_in_hex(int str)
{
	int remainder;

	if (str > 0)
	{
		remainder = str % 16;
		if (remainder >= 10)
			remainder += 'W';
		else
			remainder += '0';
		ft_print_in_hex(str /= 16);
		write(1, &remainder, 1);
	}
}
