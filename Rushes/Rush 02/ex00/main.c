/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:15:06 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/14 12:19:51 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(char *str);
int		ft_count_lines(char *str);
struct key_value	*ft_create_dict(char *str, size_t size);

int		main(int argc, char **str)
{
	unsigned int	sz;
	int				fd;
	char			*c;
	size_t			count;
	struct key_value *dictionary;

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
	dictionary = ft_create_dict(c, sz);
	printf("%d", dictionary[10].key);
	printf("%s", dictionary[10].value);
	
	return (0);
}
