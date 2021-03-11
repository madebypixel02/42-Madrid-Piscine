#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main ()
{
  char str[][5] = { "R2D2" , "R3PO" , "R2A6A", "C2D2" };
  int n;
  puts ("Looking for R2 astromech droids...\n");
  for (n=0 ; n<3 ; n++)
  {
    if (ft_strncmp (str[n],"R2xx",2) == 0)
    {
      printf ("Found %s\n",str[n]);
	  
    }
	printf("%d\n\n", ft_strncmp(str[n],"R2xx",2));
  }
  return 0;
}
