/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsqlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:33:05 by rvaldes-          #+#    #+#             */
/*   Updated: 2021/03/18 10:29:12 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQLIB_H

# define BSQLIB_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_squares(int lines, int line_size, char **main_tab, char *file_arr);
int		ft_find_obstacles(int *coord, int k, char **main_tab, char *file_arr);
void	ft_fill(int *coord, int k, char **main_tab, char *file_arr);
int		ft_min(int lines, int line_size);
int		ft_check_map(char *map_str);
int		ft_check_params(int nlines, char *cars);
int		ft_check_values(char *map, int nlines, char *c);
int		ft_atoi(char *str, int limit);
int		ft_open_file(char *file);
int		ft_count_chars(char *map_str, int line);
char	**ft_twodim_arr(char *p, int line, int line_size);
char	*ft_get_chararray(char *map_str);
int		ft_mapwork(char *file_arr);
void	ft_print_matrix(int line, int linesize, char **main_tab);
void	ft_stdin(void);
int		ft_sizeof(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_nbrlen(int nbr);
void	ft_free_stdin(char *temp, char *str);
int		ft_file_size(char *file);

#endif
