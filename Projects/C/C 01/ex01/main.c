/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 12:47:17 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/03 12:47:20 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int m;
	int *ptr = &m;
	int **ptr1 = &ptr;
	int ***ptr2 = &ptr1;
	int ****ptr3 = &ptr2;
	int *****ptr4 = &ptr3;
	int ******ptr5 = &ptr4;
	int *******ptr6 = &ptr5;
	int ********ptr7 = &ptr6;
	int *********ptr8 = &ptr7;

	m = 45634;
	ft_ultimate_ft(&ptr7);
	printf("%d", ********ptr7);
}
