/* Function that compares two strings like strcmp */
#include "my_functions.h"

int strings_compare(char *s1, const char *s2)
{
  int s3 
  int i;

  i = 0;
  s3 = 0;
  while(s1[i]!='\0' || s2[i]!='\0')
    {
      s3 = s1[i]-s2[i]; /* Store difference of s1 & s2 in variable s3 */
      i++;
    }
      if(s3!=0) 
	{
	  break;
	}
  return s3;
}
