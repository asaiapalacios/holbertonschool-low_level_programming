/* Function that checks if a string contains only printable characters (including space) */
#include "my_functions.h"

int string_printable(char *s)
{
  int i;

  i = 0;
  while(s[i] != '\0' && (s[i] >= '32' && s[i] <= '255')) /* '255' = ' ' (space) */
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
