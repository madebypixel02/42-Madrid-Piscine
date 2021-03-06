/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:40:48 by aperez-b          #+#    #+#             */
/*   Updated: 2021/02/26 14:40:57 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strnbr(int nb);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, &"-", 1);
		write(1, &"2", 1);
		ft_strnbr(147483648);
	}
	else if (nb == 0)
		write(1, &"0", 1);
	else if (nb < 0)
	{
		nb = -nb;
		write(1, &"-", 1);
	}
	if (nb > 0 && nb <= 2147483647)
		ft_strnbr(nb);
}

void	ft_strnbr(int nb)
{
	int i;
	int digit;

	if (nb != 0)
	{
		i = nb % 10;
		digit = i + '0';
		nb = nb / 10;
		ft_strnbr(nb);
		write(1, &digit, 1);
	}
}
