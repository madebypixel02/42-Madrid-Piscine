/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:27:31 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/18 12:48:55 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int orig;

	orig = nb;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= orig;
		power--;
	}
	return (nb);
}
