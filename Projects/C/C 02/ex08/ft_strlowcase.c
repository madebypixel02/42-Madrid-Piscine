/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:09:20 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/06 09:12:38 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str);

char	*ft_lowcase(char *str)
{
	char *str0;

	str0 = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
	}
	return (str0);
}

int		ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str < 65 || *str > 90) && (*str < 97 || *str > 122))
			return (0);
		str++;
	}
	return (1);
}
