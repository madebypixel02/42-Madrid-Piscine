/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:28:11 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/04 10:28:16 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int *tab2;
	int *tab0;
	int i;

	tab0 = tab;
	i = 0;
	while (i < size)
	{
		tab = tab0;
		tab2 = tab + 1;
		while (tab2 != tab0 + size)
		{
			if (*tab > *tab2)
			{
				temp = *tab;
				*tab = *tab2;
				*tab2 = temp;
			}
			tab++;
			tab2 = tab + 1;
		}
		i++;
	}
}
