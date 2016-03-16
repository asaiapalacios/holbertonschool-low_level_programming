char *string_ncopy(char *dest, const char *src, int n)
/* Write a function that copies a string. Prototype: char *string_ncopy(char *dest, const char *src, int n); Your function should work exactly like strcnpy */
  
{
  int i;

  for (i = 0; i < n && src[i] != '\0'; i++)
    dest[i] = src[i];
  for ( ; i < n; i++)
    dest[i] = '\0';

  return dest;
}
