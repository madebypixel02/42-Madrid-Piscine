/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:09:38 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/09 12:41:07 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_sizeof(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int size_src;

	i = 0;
	size_src = ft_sizeof(src);
	while (i < size - 1 && size >= 2)
	{
		if (i <= size_src - 1)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (size_src);
}

int				ft_sizeof(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
