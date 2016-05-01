/* Function that reverses a string */
#include "my_functions.h"

char *rev_string(char *str)
{
  char temp;
  int i;
  int j;
  int len;

  i = 0;
  /* Length of string */
  len = 0;
  while(str[len] != '\0')
    {
      len++;
    }
  /* Subract 1 to set value of j to the last item of the string because element 0 is your start */
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
