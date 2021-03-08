#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un7hello/world. h!a";

	printf("Original: %s\n", string);

	printf("Fixed:    %s\n", ft_strcapitalize(string));
}