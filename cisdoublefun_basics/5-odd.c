/* Write a function returning O if a number is odd otherwise 'E'. Only binary operators are allowed */
#include "my_functions.h"

char odd(int n)
{

  return((n & 1)? 'O': 'E');

  /* Code underneath will provide same output, just coded differently. 
  if(n & 1)
    {
      return('O');
    }
  else
    {
      return('E');
    } */
}
