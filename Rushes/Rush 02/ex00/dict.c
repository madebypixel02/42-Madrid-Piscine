#include <stdio.h>
#include "rush02.h"

int		ft_count_lines(char *str)
{
	int nlines;
	int i;

	i = 0;
	nlines = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			nlines++;
		i++;
	}
	return (nlines);
}

void	ft_create_dict(char *str)
{
	int nlines;
	struct key_value *dictionary;

	dictionary[0].value = "string";
	printf("%s %d\n", dictionary[0].value, ft_count_lines(str));
	/*return ((char *)dictionary);*/
}