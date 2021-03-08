#include <stdio.h>

char		*ft_lowcase(char *str);

int		main(void)
{
	char string[] = "ZsSdf";

	printf("Original: %s\n", string);

	printf("Lowercase: %s\n", ft_lowcase(string));
}