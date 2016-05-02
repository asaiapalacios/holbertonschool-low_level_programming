#include "my_functions.h"
/* Function that concatenates two strings */
char *string_concat(char *dest, const char *src) /* Function string_concat behaves like strcat function */
{
  int i;
  int j;

  i = 0;
  while(dest[i] !='\0') /* Loop stores length of dest in i; Other way? Use function strlen: i = strlen(dest); */
    {
      /* printf("i= %d\n", i); <<-- Testing/debugging */
      i++;
    }
  /* Loop concatenates string src at the end of dest */
  j = 0;
  while(src[j] !='\0')
    {
      /* printf("i= %d, j= %d\n", i, j); <<-- Testing/debugging */
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0'; 

  return (dest);
}
