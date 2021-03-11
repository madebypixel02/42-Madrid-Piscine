#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main ()
{
	char str[80];
	ft_strlcat(str, "these ", 5);
	printf("%u\n", ft_strlcat(str, "words ", 34));
	printf("%s\n", str);
}
