#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2, unsigned int n);

int main ()
{
  char str[][5] = { "R2D2" , "C3PO" , "R2A6", "C2D2" };
  int n;
  puts ("Looking for R2 astromech droids...");
  for (n=0 ; n<3 ; n++)
    if (strncmp (str[n],"R2xx",2) == 0)
    {
      printf ("Found %s\n",str[n]);
    }
  return 0;
}