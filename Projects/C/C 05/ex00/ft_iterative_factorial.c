/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 17:58:20 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/18 12:42:30 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int curr_nbr;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	curr_nbr = nb - 1;
	while (curr_nbr > 0)
	{
		nb *= curr_nbr;
		curr_nbr--;
	}
	return (nb);
}
