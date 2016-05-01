/* Function that checks if a string contains only alphabetical characters */
#include "my_functions.h"

int string_alpha(char *s)
{
  int i;

  i = 0;
  while(s[i] != '\0' && (s[i] >= 'A' && s[i] <= 'Z') && (s[i] >= 'a' && s[i] <= 'z'))
    {
      i++;
      return (1); /* Signals true */
    }
  else if
    {
      return (0); /* Signals false */
    }
  else(s[i] == '\0') /* If string is empty, return 1 */
    {
      return (1); /* Signals true (empty) */
    }
}
