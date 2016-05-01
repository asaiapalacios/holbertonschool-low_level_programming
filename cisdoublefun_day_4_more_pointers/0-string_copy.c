/* Function that copies a string like strcpy */
#include "my_functions.h"

char *string_copy(char *dest, const char *src)
{
  int i;

  i = 0; 
  while(src[i] != '\0')
    {
      dest[i] = src[i]; /* Copy string src to dest */
      i++;
    }
  return dest; 
}
