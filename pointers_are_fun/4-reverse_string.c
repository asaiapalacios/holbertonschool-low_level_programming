void reverse_string(char *s)
{
  int i, j, count = 0; /* Count variable is used to find the length of the string */
  char t[50];
  for (i = 0; s[i] != '\0' ; i++) /* First for loop is used to find the length of string */
    {
      count++;
    }
  for (i = count - 1, j = 0; i >= 0; i--, j++) /* Second for loop is to reverse the string. Note: both i and j are iterating in the second for loop. */
    {
      t[j] = s[i]; /* i is iterating from length of string to the first element. j is used to iterate another string array named t, in which we keep the reversed string. */
    }
  for (i = 0; i < count; i++) /* Third for loop keeps the reversed string in s */
    {
      s[i] = t[i];
    }
}






