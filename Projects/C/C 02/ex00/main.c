#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
	char src[] = "Hello World!";
	char dest1[13];
	char dest2[13];

	printf("%s\n", strcpy(dest1, src));
	printf("%s\n", ft_strcpy(dest2, src));
	
}