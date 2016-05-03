#define NULL 0

#include <unistd.h>
int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_array_of_strings(char **a)
{
  int j;
  int i;
  char *str;

  j = 0;
  i = 0;
  while(a[j] != NULL)
    {
      str = a[j];
      while(str[i] != '\0')
	{
	  print_char(str[i]);
	  i++;
	}
      i=0;
      print_char(' ');
      j++;
    }
  print_char('\n');
}
