/* Recursive function that returns the value of x raised to the power of y */
#include "my_functions.h"

int power(int x, int y)
{
  int result;
  
  if(y < 0)
    {
      return (-1);
    }
  if(x < 0)
    {
      return (-1);
    }
  else if (y == 0)
    {
      return (1);
    }
  /* Code returning the value of x raised to the power of y */
  else
    {
      result = x * power(x,y-1);
    }

  return(result);
}

