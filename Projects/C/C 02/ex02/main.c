#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char string[] = "sdf ";

	printf("Only has alpha: %d", ft_str_is_alpha(string));
}
