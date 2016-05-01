/* Function that checks if a string contains only digits */
#include "my_functions.h"

int string_digit(char *s)
{
  int i;

  i = 0;
  while(s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
    {
      i++;
      return (1); /* True */
    }
  else if
    {
      return (0); /* False */
    }
  else(s[i] == '\0') 
	{
	  return (1); /* True (string empty) */
	} 
}
