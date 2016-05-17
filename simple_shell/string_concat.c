char *string_concat(char *dest, const char *src) {
  int i;
  int j;

  i = 0;
  while(dest[i] != '\0') {
    i++;
  }
  /* loop catenate string src at end of destination */
  j = 0;
  while(src[j] != '\0') {
    dest[i] = src[j];
    i++;
    j++;
  }
  dest[i] = '\0';
  return (dest);
}
