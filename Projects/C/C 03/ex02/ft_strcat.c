/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:55:34 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/08 21:19:44 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_sizeof(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int		size_dst;
	int		size_src;
	char	*full_str;
	int		i;

	/*full_str = NULL;*/

	/*printf("%d",ft_sizeof(dest) + ft_sizeof(src));*/
	size_dst = ft_sizeof(dest);
	size_src = ft_sizeof(src);
	i = '0';
	
	while (i < (size_src + size_dst) + '0')
	{
		if (i < size_src)
			full_str[i] = src[i];
		/*else
			full_str[i] = dest[i];*/
		i++;
	}
	return (full_str);
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