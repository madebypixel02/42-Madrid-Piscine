#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char string[] = "42343";

	printf("Has only numeric: %d", ft_str_is_numeric(string));
}