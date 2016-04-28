/* Write a function that reverses a string */
#include "my_functions.h"

char *rev_string(char *str)
{
  char temp;
  int i;
  int j;
  int len;
  /* Determine length of string */
  i = 0;
  len = 0;
  while(str[len] != '\0')
    {
      len++;
    }
  /* Subract 1 to set value of j to the last item of the string and not '\O' */
  j = len-1;

  /* Reverse string */
  while (i < j)
    {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
    }
    return(str);
}
