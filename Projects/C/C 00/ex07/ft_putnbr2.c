/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldurante <ldurante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:06:58 by ldurante          #+#    #+#             */
/*   Updated: 2021/03/02 19:50:20 by ldurante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr2(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr2(147483648);
		return ;
	}
	else if (nb > 9 && nb <= 2147483647)
	{
		ft_putnbr2(nb / 10);
		ft_putnbr2(nb % 10);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr2(-nb);
	}
	else
		ft_putchar(nb + 48);
}
