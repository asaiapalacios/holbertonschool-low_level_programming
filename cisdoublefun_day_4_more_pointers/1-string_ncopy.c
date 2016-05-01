/* Function that copies a string like strncpy */
#include "my_functions.h"

char *string_ncopy(char *dest, const char *src, int n)
  
{
  int i;

  i = 0;
  while(i < n && src[i] != '\0')
    {  
      dest[i] = src[i];
      i++;
    }

  while(i < n)
    {
      dest[i] = '\0'; /* Include Null */
      i++;
    }

  return dest;
}
