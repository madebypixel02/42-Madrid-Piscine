#include <unistd.h>
#include <stdio.h>

void	ft_hex(char **ptr);

int		main(void)
{
	char a;
	char *ptr;

	ptr = &a;

	printf("%08p\n", ptr);
}