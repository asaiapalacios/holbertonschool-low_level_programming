char *concat_strings(char *dest, const char *src)
/* Write a function that concatenates two strings. Prototype: char *concat_strings(char *dest, const char *src); Your function should work exactly like strcat */

{
  int i, j;
  int count=0;
  
  /* This loop stores the length of dest in i. It counts the number of char in dest */
  for(i=0; dest[i]!='\0'; i++) {
    count++;
  }
  /* This loop concatenates string src at the end of dest */
  for(j=0, i=count; src[j]!='\0'; i++, j++)
    {
      dest[i] = src[j];
    }
  return dest;
}
