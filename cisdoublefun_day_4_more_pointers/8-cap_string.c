/* Function that capitalizes all words of a string */
#include "my_functions.h"

char *cap_string(char *)
{
  int i;
  
  i = 0;
  while(j[i]!='\0')
    {
    if(j[i]==' ' || j[i]=='\t' || j[i]=='\n') 
      { 
	if(j[i+1] >= 'a' && j[i+1] <= 'z') 
	  { /* +1 = Capitalize 1st character of a word in the string after ' ', \t, and \n */ 
	    j[i+1] = j[i+1] - 32; 
	    i++;
	  }
      }
    }
  return (j);
}
