#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char string[] = "dssd3";

	printf("Has only printable characters: %d", ft_str_is_printable(string));
}