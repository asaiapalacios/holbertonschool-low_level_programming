#include <stdlib.h>
#include "my_functions.h"
/* Return a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter */
char *string_dup(char *str)
{
  int len;
  int j;
  char *dup;
  int i;

  /* Length of string */
  len = 0;
  while(str[len] != '\0')
    {
      len++;
    }
  /* Store length of string */
  j = len;
  /* Allocate sizeof(char) in memory to duplicate (dup) */
  dup = malloc((j + 1) * sizeof(char)); /* +1 for '\0' */
  i = 0;
  while(i < j) 
    {
      dup[i] = str[i];
      i++;
    }
  dup[i] = '\0'; /* last item is '\0' (Null) */
  return (dup);
}
