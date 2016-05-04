int str_len(char *s)
/* Write a function that returns the length of a string */
{
  int length;

  for(length=0; s[length]!='\0'; length++); /* Stop length count when reach '\0' */
  return(length);
}
