#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main ()
{
	/*char str2[80];
	strlcat(str2,"these ", 3);
	strlcat(str2,"strings ", 4);
	strlcat(str2,"are ", 80);
	strlcat(str2,"concatenated.", 4);
	printf("%s\n", str2);*/

	char str[80];
	strlcat(str, "these ", 5);
	strlcat(str, "words ", 6);
	strlcat(str,"are ", 80);
	strlcat(str,"concatenated.", 4);
	printf("%s\n", str);

	
}

