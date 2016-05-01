/* Function that changes all upper case letters of a string to lowercase */
#include "my_functions.h"

char *lowercase_string(char *)
{
  int i;

  i = 0;
  while(j[i]!='\0')
    {
      if(j[i] >= 'A' && j[i] <= 'Z')
	{
	  j[i] = j[i] + 32; /* j[i] value equal to lowercase character in ASCII table when add by 32 */
	  i++;
	}
    }
  return(j);
}
