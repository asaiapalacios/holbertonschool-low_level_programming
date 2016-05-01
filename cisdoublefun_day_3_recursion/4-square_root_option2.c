/* Iterative function that returns the natural square root of a number */
#include "my_functions.h"

int square_root(int n)
{
  int i;
  int result;

  i = 1;
  result = 1;
  if(n == 0 || n == 1)
    {
    return n;
    }
  if(n < 1)
    {
      return (-1);
    }
  while(result < n)
    {
      if(result == n)
	{
	  return result;
	  i++;
	  result = i*i;
	}
    }
  return (i - 1);
}


