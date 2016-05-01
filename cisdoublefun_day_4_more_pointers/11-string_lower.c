/* Function that checks if a string contains only lower-case alphabetical characters */
#include "my_functions.h"

int string_lower(char *s)
{
  int i;

  i = 0;
  while(s[i] != '\0' && (s[i] >= 'a' && s[i] <= 'z'))
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
