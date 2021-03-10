/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:55:34 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/10 16:03:03 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_sizeof(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*ptr;
	unsigned int 	i;

	ptr = dest + ft_sizeof(dest);
	i = ft_sizeof(dest);
	while (i < size - 1 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	if (size != 0)
		*ptr = '\0';
	return (ft_sizeof(dest) + ft_sizeof(src));
}

int			ft_sizeof(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
