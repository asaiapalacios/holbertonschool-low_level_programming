char *concat_strings(char *dest, const char *src)
/* Write a function that concatenates two strings. Prototype: char *concat_strings(char *dest, const char *src); Your function should work exactly like strcat */

{
  char i, j;
  
  /* This loop stores the length of s1 in i. It counts the number of char in s1 */
  for(i=0; dest[i]!='\0'; i++);

  /* This loop concatenates string s2 at the end of s1 */
  for(j=0; src[j]!='\0'; i++, j++)
    {
      dest[i] = src[j];
    }
  dest[i] = '\0';
}
