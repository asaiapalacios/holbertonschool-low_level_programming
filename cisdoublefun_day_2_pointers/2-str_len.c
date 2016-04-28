/* Write a function that returns the length of a string */
#include "my_functions.h"

int str_len(char *s)
{
  int len;

  len = 0;
  /* Increase len until it is no longer different than '\0' */
  while(s[len] != '\0')
    {
      len++;
    }
  return(len);
}
