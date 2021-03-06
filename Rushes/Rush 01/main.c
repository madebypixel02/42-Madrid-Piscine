/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 16:05:52 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/06 18:49:19 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	fill(int n);
void	ft_print_board(int create);
void	ft_discard_by_row(int x_i, int y_i, char z_i);

char g_board[6][6][4];

int		main(int count, char **str)
{
	char values[16];
	int i;
	int n;

	printf("%c", *str[1]);
	i = 0;
	if (count == 1)
	{
		while (*str[1] != '\0')
		{	
			write(1, str[1], 1);
			str++;
			/*if (str[1][i] != ' ')
			{
				values[i] = str[1][i];
			}
			i++;
			
		}
		n = i;
		i = 0;
		while (i <= n)
		{
			printf("%c", values[i]);
			i++;
		}
		
	}
	ft_print_board(1);
	write(1, "\n\n", 2);
	ft_discard_by_row(2, 0, '4');
	ft_print_board(0);

}*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main( int count, char **values)
{
    //char table;
    int x;
    int z;
    char *y;
    char fila1[4];
    char fila2[4];
    char columna1[4];
    char columna2[4];

    char tabla[6][6];

    if(count != 2) exit(1);

    y = (char ) malloc(16);
    x = 0;
    z = 0;
    while (values[1][x] != 0)
    {
        if (values[1][x] > 47 && values[1][x] < 58)
        {
            y[z] = values[1][x];
            z++;
        }
        x++;
    }

    printf("%s", y);



    /
    col[0] = y[0];
    col[1] = y[1];
    col[2] = y[2];
    col[3] = y[3];
    col[0] = y[4];
    col[1] = y[5];
    col[2] = y[6];
    col[3] = y[7];

    row[0] = y[8];
    row[1] = y[9];
    row[2] = y[10];
    row[3] = y[11];
    row2[0] = y[12];
    row2[1] = y[13];
    row2[2] = y[14];
    row2[3] = y[15];
     */

    return 0;


}

void	ft_discard_by_row(int x_i, int y_i, char z_i)
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
			if (x == x_i && y == y_i)
			{
				z = 0;
				while (z <= 3)
				{
					z++;
				}
			}
			y++;
		}
		x++;
	}
}

void	ft_print_board(int create)
{
	int x;
	int y;
	int z;

	x = 1;
	while (x <= 4)
	{
		y = 1;
		while (y <= 4)
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
}
