char *nconcat_strings(char *dest, const char *src, int n)
/* Write a function that concatenates two strings. Prototype: char *nconcat_strings(char *dest, const char *src, int n); Your function should work exactly like strncat */

{
  size_t i;
  
  /* This loop stores the length of dest in i. It counts the number of char in dest */
  for(i=0; dest[i]!='\0'; i++);

  /* Append portion of src string at the end of dest string */
  for(i = 0; i < n && src[i] != '\0'; i++)
    {
      dest[dest_len + i] = '\0';
    }
  return dest;
}
