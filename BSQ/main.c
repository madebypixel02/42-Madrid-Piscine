/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:21:24 by rvaldes-          #+#    #+#             */
/*   Updated: 2021/03/18 09:53:00 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

int		ft_file_size(char *file)
{
	int		i;
	int		fd;
	char	c;

	i = 0;
	if ((fd = open(file, O_RDONLY)) >= 0)
	{
		while ((read(fd, &c, 1)) == 1)
			i++;
	}
	close(fd);
	return (i);
}

int		ft_open_file(char *file)
{
	unsigned int	size;
	int				fd;
	char			*file_arr;
	char			*ptr;

	ptr = (char *)malloc(ft_file_size(file));
	fd = open(file, O_RDONLY);
	file_arr = ptr;
	if (fd == -1)
	{
		write(2, &"map error\n", 10);
		free(ptr);
		return (1);
	}
	size = read(fd, file_arr, ft_file_size(file));
	file_arr[size] = '\0';
	close(fd);
	if (ft_mapwork(file_arr) == 1)
	{
		free(ptr);
		return (1);
	}
	free(ptr);
	return (0);
}

int		ft_mapwork(char *file_arr)
{
	int		lines;
	int		line_size;
	char	**matrix;
	int		i;

	if (ft_check_map(file_arr) == 1)
	{
		write(2, &"map error\n", 10);
		return (1);
	}
	line_size = ft_count_chars(file_arr, 1);
	lines = ft_atoi(file_arr, ft_count_chars(file_arr, 0) - 3);
	matrix = ft_twodim_arr(file_arr, lines, line_size);
	ft_squares(lines, line_size, matrix, file_arr);
	ft_print_matrix(lines, line_size, matrix);
	i = 0;
	while (i < lines)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (0);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		is_error;

	if (argc == 1)
		ft_stdin();
	else
	{
		i = 1;
		while (i < argc)
		{
			is_error = ft_open_file(argv[i]);
			if (i != argc - 1 && is_error == 0)
				write(2, &"\n", 1);
			i++;
		}
	}
}
