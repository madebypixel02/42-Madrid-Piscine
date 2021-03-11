#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main ()
{
  	char str[] = "This is a simple string, and I love it";
	char substr[] = "and ";
  	char *pch;
	printf("String:    %s\n", str);
	printf("Substring: %s\n", substr);
  	pch = ft_strstr(str, substr);
	printf("Match:     %s", pch);
}