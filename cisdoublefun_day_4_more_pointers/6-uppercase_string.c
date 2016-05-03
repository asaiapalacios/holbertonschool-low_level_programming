/* Function that changes all lowercase letters of a string to uppercase */
#include "my_functions.h"

char *uppercase_string(char *j)
{
  int i;
  
  i = 0;
  while(j[i]!='\0')
    { 
    if(j[i] >= 'a' && j[i] <= 'z') 
      {
	j[i] = j[i] - 32; /* j[i] value equal to uppercase character in ASCII table after subtracting by 32 */
      }
    i++;
    }
  return(j);
}
