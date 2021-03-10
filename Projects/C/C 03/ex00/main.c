#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;

    // comparing strings str1 and str2
    result = ft_strcmp(str2, str3);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = ft_strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);

    return 0;
}
