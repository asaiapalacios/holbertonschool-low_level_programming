/* Write an iterative function that returns the factorial of a given number */
#include "my_functions.h"

int factorial(int n)
{
  int i;
  int res;

  i = 1;
  res = 1;
  if(n < 0)
    {
      return(-1);
    }
  if(n == 0)
    {
      return(1);
    }
  /* Iterative code returning the factorial of a given number */
  while(i <= n)
    {
      res = res * i;
      i++;
    }
  return (res);
}
