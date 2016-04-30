/* Write a recursive function that returns the factorial of a given number */
#include "my_functions.h"

int factorial(int n)
{
  if(n < 0)
    {
      return(-1);
    }
  if(n == 0)
    {
      return(1);
    }
  /* Recursive code returning the factorial of a given number */
  return (n * factorial(n-1));
}
