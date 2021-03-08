#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char string[] = "dfgdfsdvfd";

	printf("Has only lowercase alpha: %d", ft_str_is_lowercase(string));
}