/* Function that checks if a string contains only upper-case alphabetical characters */
#include "my_functions.h"

int string_upper(char *s)
{
  int i;

  i = 0;
  while(s[i] != '\0' && (s[i] >= 'A' && s[i] <= 'Z'))
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
