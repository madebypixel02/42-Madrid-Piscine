#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	/*char src[] = "Hello World!";
	char dest2[6];
	unsigned int n;

	
	printf("%s\n", strncpy(dest2, src, n));*/
	char chararray[12];

    printf("%s", ft_strncpy(chararray, "abcdefghi jklm", sizeof(chararray)));
	return (0);
	
}