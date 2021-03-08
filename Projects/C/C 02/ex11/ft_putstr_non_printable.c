/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:09:46 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/08 19:48:54 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_in_hex(char *str);

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			ft_print_in_hex(str);
		else
			write(1, str, 1);
		str++;
	}
}

void	ft_print_in_hex(char *str)
{
	char	arr[3];
	int		i;

	arr[0] = '\\';
	arr[1] = ((*str / 16) % 10) + '0';
	if ((*str % 16) / 10 != 0)
		arr[2] = ((*str % 16) % 10) + 'a';
	else
		arr[2] = ((*str % 16) % 10) + '0';
	i = 0;
	while (i < 3)
	{
		write(1, &arr[i], 1);
		i++;
	}
}
