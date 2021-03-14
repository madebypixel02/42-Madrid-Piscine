/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:15:06 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/14 23:11:03 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **str)
{
	unsigned int	size;
	char			*file;
	char			*dict_str;
	struct s_kv		*dict;
	char			*nbr;

	dict_str = (char *)malloc(65535);
	file = "numbers.dict";
	if (argc == 3)
	{
		file = str[1];
		nbr = str[2];
	}
	else if (argc == 2)
		nbr = str[1];
	if (ft_check_args(argc, str, file) == 1)
		ft_print_error();
	size = read(open(file, O_RDONLY), dict_str, 65535);
	dict_str[size] = '\0';
	dict = ft_create_dict(dict_str, size);
	free(dict_str);
	ft_to_str(nbr, dict);
	return (0);
}

int	ft_check_args(int argc, char **str, char *file)
{
	int	is_error;

	is_error = 0;
	if (argc != 2 && argc != 3)
		is_error = 1;
	else if (argc == 2)
	{
		if (ft_input_atoi(str[1]) < 0)
			is_error = 1;
	}
	else if (argc == 3)
	{
		if (ft_input_atoi(str[2]) < 0 || open(file, O_RDONLY) == -1)
			is_error = 1;
	}
	return (is_error);
}

void	ft_print_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}
