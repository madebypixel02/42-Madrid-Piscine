/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:55:34 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/18 18:05:33 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char *dest0;

	dest0 = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	if (*src == '\0')
		*dest = '\0';
	return (dest0);
}

char	*ft_strdup(char *src)
{
	int i;
	char *str;

	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char *)malloc(i);
	str = ft_strcpy(str, src);
	return (str);
}
