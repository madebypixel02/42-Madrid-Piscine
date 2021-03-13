/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:15:06 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/13 20:22:08 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(char *str);
int		ft_count_lines(char *str);
void	ft_create_dict(char *str);

int		main(int argc, char **str)
{
	unsigned int	sz;
	int				fd;
	char			*c;
	size_t			count;

	if (argc != 2 && argc != 3)
	{
		write(1, "Error", 5);
		return (0);
	}
	count = 65535;
	fd = open("numbers.dict", O_RDONLY);
	c = (char *)malloc(65535);
	if (fd == -1)
	{
		printf("File couldn't be read!\n");
		return (1);
	}
	sz = read(fd, c, count);
	c[sz] = '\0';
	ft_create_dict(c);
	printf("Those bytes are as follows:\n%s", c);
	return (0);
}
