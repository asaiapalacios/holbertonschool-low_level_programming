/* Function that compares two strings like strcmp */
#include "my_functions.h"
/* Function that compares two strings */
int strings_compare(char *s1, const char *s2)
{
  int s3;
  int i;

  i = 0;
  s3 = 0;

  while(s1[i] == s2[i] && s1[i] != '\0')
    {
      i++;
    }
  if (s1[i] > s2[i])
    {
      s3 = s1[i] - s2[i];
      return (s3);
    }
  else if (s1[i] < s2[i])
    {
      s3 = s1[i] - s2[i];
      return (s3);
    }
  else
    {
      return (0);
    }
}
