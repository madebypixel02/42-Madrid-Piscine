#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char src[] = "Hello World!";
	char dest1[55];
	char dest2[55];
	int size;

	size = 8;
	ft_strlcpy(dest1, src, size);
	strlcpy(dest2, src, size);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
}
