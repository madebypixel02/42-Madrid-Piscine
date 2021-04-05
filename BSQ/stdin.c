/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:39:46 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/18 09:51:31 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"

void	ft_stdin(void)
{
	char	*str;
	char	*temp;
	int		nl;
	int		i;

	i = -1;
	str = (char *)malloc(1024);
	temp = (char *)malloc(1024);
	read(0, str, 42);
	nl = ft_atoi(str, ft_count_chars(str, 0) - 3);
	if (nl < 0 || ft_nbrlen(nl) + 3 != ft_count_chars(str, 0))
	{
		ft_free_stdin(temp, str);
		write(2, &"map error\n", 10);
		exit(1);
	}
	while (++i != nl)
	{
		read(0, temp, 1024);
		str = ft_strcat(str, temp);
	}
	write(1, &"\n", 1);
	ft_free_stdin(temp, str);
	ft_mapwork(str);
}

void	ft_free_stdin(char *temp, char *str)
{
	free(temp);
	free(str);
}

char	*ft_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest + ft_sizeof(dest);
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

int		ft_sizeof(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_nbrlen(int nbr)
{
	int	count;

	count = 0;
	while (nbr > 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}
