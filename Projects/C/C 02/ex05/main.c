#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char string[] = "ASDDC";

	printf("Has only uppercase alpha: %d", ft_str_is_uppercase(string));
}