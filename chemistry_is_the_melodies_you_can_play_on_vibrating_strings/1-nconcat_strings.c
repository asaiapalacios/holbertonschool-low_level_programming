char *nconcat_strings(char *dest, const char *src, int n)
/* Write a function that concatenates two strings. Prototype: char *nconcat_strings(char *dest, const char *src, int n); Your function should work exactly like strncat */

{
  int i=0, j;
  
  /* This loop stores the length of dest in i. It counts the number of char in dest */
  while(dest[i]!='\0') 
    {
      i++;
    }
  /* Append portion of src string at the end of dest string */
  for(j = 0; j < n && src[j] != '\0'; j++, i++)
    {
      dest[i] = src[j];
    }
  return dest;
}
