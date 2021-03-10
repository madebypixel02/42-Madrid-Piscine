#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main ()
{
  	char str[] = "This is a simple string";
  	char *pch;
  	pch = ft_strstr(str,"is a");
	printf("Needle: %s", pch);
}