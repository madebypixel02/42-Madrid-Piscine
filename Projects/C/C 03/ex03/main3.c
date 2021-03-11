#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main ()
{
	char str2[80];
	strncat(str2,"these ", 3);
	strncat(str2,"strings ", 4);
	strncat(str2,"are ", 80);
	strncat(str2,"concatenated.", 4);
	printf("%s\n", str2);

	char str[80];
	ft_strncat(str,"these ", 3);
	ft_strncat(str,"strings ", 4);
	ft_strncat(str,"are ", 80);
	ft_strncat(str,"concatenated.", 4);
	printf("%s\n", str);

	
}

