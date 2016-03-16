char *string_copy(char *dest, const char *src)
/* Write a function that copies a string. Prototype: char *string_copy(char *dest, const char *src); Your function should work exactly like strcpy */

{
  int i;
  
  for (i = 0; src[i] != '\0'; i++)
    dest[i] = src[i];
    return dest; 
}
