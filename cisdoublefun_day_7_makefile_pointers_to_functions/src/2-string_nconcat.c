#include "my_functions.h"
/* Function that concatenates two strings */
char *string_nconcat(char *dest, const char *src, int n) /* Function string_concat behaves like strncat function */
{
  int i;
  int j;

  i = 0;
  while(dest[i] !='\0') /* Loop stores length of dest in i; Other way? Use function strlen: i = strlen(dest); */
    {
      /* printf("i= %d\n", i); <<-- To test/debug */
      i++;
    }
  /* Loop concatenates string src at the end of dest */
  j = 0;
  while(j < n && src[j] !='\0')
    {
      /* printf("i= %d, j= %d\n", i, j); <<-- To test/debug */
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i+1] = '\0';

  return (dest);
}
