#include <stdio.h>
#include <unistd.h>
#include "rush02.h"
#include <stdlib.h>

int		ft_atoi(char *str);

int		ft_max_len(char *str);

int		ft_isspce(char *str);

struct key_value	*ft_add_values(char *str, struct key_value	*dictionary, int max_len);

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

struct key_value	*ft_create_dict(char *str, size_t size)
{
	struct key_value *dictionary;
	int i;
	char *ptr;
	unsigned int key;
	int max_len;

	dictionary = malloc(size);
	i = 0;
	ptr = str;
	dictionary[i].key = ft_atoi(ptr);
	max_len = ft_max_len(str);
	while (*ptr != '\0')
	{	
		if (*ptr == '\n' && *(ptr + 1) != '\0')
		{
			i++;
			key = ft_atoi(ptr + 1);
			dictionary[i].key = key;
		}
		ptr++;
	}
	dictionary = ft_add_values(str, dictionary, max_len);
	return (dictionary);
}

struct key_value	*ft_add_values(char *str, struct key_value	*dictionary, int max_len)
{
	char *ptr;
	int i;
	int j;

	ptr = str;
	i = 0;
	while (*ptr != '\0')
	{
		dictionary[i].value = malloc(max_len);
		if ((*ptr == '\n' && *(ptr + 1) != '\0') || i == 0)
		{
			while (*ptr != ':')
				ptr++;
			ptr++;
			while (ft_isspce(ptr) == 1)
				ptr++;
			j = 0;
			while (ptr[j] != '\n')
			{
				if (ptr[j] >= 32 && ptr[j] <= 126)
					dictionary[i].value[j] = ptr[j];
				j++;
			}
			i++;
		}
		ptr++;
	}
	return (dictionary);
}