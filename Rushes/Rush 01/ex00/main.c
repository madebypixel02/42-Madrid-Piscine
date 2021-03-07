/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 16:05:52 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/07 07:10:26 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	fill(int n);
void	ft_print_board(int create);
void	ft_discard_by_row(int x_i, int y_i, char z_i);
void	ft_discard_by_col(int x_i, int y_i, char z_i);

char g_board[4][4][4];

int		main(int count, char **str)
{
	char values[16];
	int i;
	int n;
	char rows[2][8];
	char cols[2][8];

	
	i = 0;
	if (count == 2 && str[1][31] == '\0')
	{
		while (*str[1] > '0' && *str[1] < '5' && *str[1] != '\0')
		{			
			if (*(str[1] + 1) == ' ' || *(str[1] + 1) == '\0')
			{
				values[i] = *str[1];
				if (i == 15)
					values[16] = '\0';
			}		
			str[1] = str[1] + 2;
			i++;
		}
		if (i == 16)
		{
			i = 0;
			while (i < 16 || values[i] != '\0')
			{
				if (i < 4)
					cols[0][i] = values[i];
				else if (i < 8)
				{
					cols[1][i] = values[i];
					if (i == 7)
						cols[1][i + 1] = '\0';
				}
				else if (i < 12)
					rows[0][i] = values[i];
				else if (i < 16)
				{	
					rows[1][i] = values[i];
					if (i == 15)
						cols[1][i + 1] = '\0';
				}
				i++;
			}
			/*printf("\n%c\n", cols[0][]);*/
			/*printf("\n%s\n", rows);*/
			
			/*ft_print_board(1);
			ft_discard_by_row(0, 0, '4');
			ft_discard_by_col(0, 0, '4');
			ft_print_board(0);*/
		}
		else
		{
			write(1, "Error\n", 6);
			exit(1);
		}
			
	}
	else
	{
		write(1, "Error\n", 6);
		exit(1);
	}

}

void	ft_discard_by_row(int x_i, int y_i, char z_i)
{
	int x;
	int y;
	int z;

	x = 0;
	while (x <= 3)
	{	
		if (x == x_i)
		{
			y = 0;
			while (y <= 3)
			{
				z = 0;
				while (z <= 3)
				{
					if (y_i == y && z + 1 + '0' != z_i)
						g_board[x][y][z] = 'X';
					else if (y_i != y && z + 1 + '0' == z_i)
						g_board[x][y][z] = 'X';
					z++;
				}
				y++;
			}
			
		}
		x++;
	}
}

void	ft_discard_by_col(int x_i, int y_i, char z_i)
{
	int x;
	int y;
	int z;

	y = 0;
	while (y <= 3)
	{	
		if (y == y_i)
		{
			x = 0;
			while (x <= 3)
			{
				z = 0;
				while (z <= 3)
				{
					if (x_i == x && z + 1 + '0' != z_i)
						g_board[x][y][z] = 'X';
					else if (x_i != x && z + 1 + '0' == z_i)
						g_board[x][y][z] = 'X';
					z++;
				}
				x++;
			}
			
		}
		y++;
	}
}

void	ft_print_board(int create)
{
	int x;
	int y;
	int z;

	x = 0;
	while (x <= 3)
	{
		y = 0;
		while (y <= 3)
		{
			z = 0;
			while (z <= 3)
			{
				if (create == 1)
					g_board[x][y][z] = (z + 1) + '0';
				write(1, &g_board[x][y][z], 1);
				z++;
			}
			y++;
			write(1, " ", 1);
		}
		x++;
		write(1, "\n", 1);
	}
	write(1, "\n", 1);
}
