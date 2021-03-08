/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:09:30 by aperez-b          #+#    #+#             */
/*   Updated: 2021/03/08 20:21:26 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	char *str0;

	str = ft_lowcase(str);
	str0 = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			if (*(str - 1) < 65 || (*(str - 1) > 90 && *(str - 1) < 97))
			{
				if (*(str - 1) < 48 || *(str - 1) > 57)
					*str = *str - 32;
			}
			else if (*(str - 1) > 122)
				*str = *str - 32;
		}
		str++;
	}
	return (str0);
}

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
