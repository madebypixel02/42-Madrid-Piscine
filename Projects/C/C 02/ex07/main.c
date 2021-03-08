#include <stdio.h>

char		*ft_strupcase(char *str);

int		main(void)
{
	char string[] = "ZsSdf";

	printf("Original: %s\n", string);

	printf("Uppercase: %s\n", ft_strupcase(string));
}