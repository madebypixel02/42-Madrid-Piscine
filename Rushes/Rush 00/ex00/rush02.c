/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:14:24 by aperez-b          #+#    #+#             */
/*   Updated: 2021/02/27 13:14:27 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i_y;
	int i_x;

	i_y = 1;
	while (i_y <= y)
	{
		i_x = 1;
		while (i_x <= x)
		{
			if ((i_x == 1 || i_x == x) && (i_y == 1))
				ft_putchar('A');
			if ((i_x == 1 || i_x == x) && (i_y == y))
				ft_putchar('C');
			if ((i_y == 1 || i_y == y) && (i_x != 1 && i_x != x))
				ft_putchar('B');
			if ((i_y != 1 && i_y != y) && (i_x == 1 || i_x == x))
				ft_putchar('B');
			if ((i_y != 1 && i_y != y) && (i_x != 1 && i_x != x))
				ft_putchar(' ');
			i_x++;
		}
		i_y++;
		ft_putchar('\n');
	}
}
