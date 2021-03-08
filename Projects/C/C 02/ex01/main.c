#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "HelloWorlda";
	char dest1[55];
	char dest2[55];
	int n;

	n = 10;
	printf("\n%s", ft_strncpy(dest1, src, n));
	printf("\n%s", strncpy(dest2, src, n));
}