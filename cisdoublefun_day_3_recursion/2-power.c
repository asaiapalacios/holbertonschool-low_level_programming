/* Iterative function that returns the value of x raised to the power of y */
#include "my_functions.h"

int power(int x, int y)
{
  int temp;
  int result;

  temp = 0;
  result = 1;
  if(y < 0)
    {
      return (-1);
    }
  if(x < 0)
    {
      return (-1);
    }
  if(y == 0)
    {
      return (1);
    }
  /* Code that returns the value of x raised to the power of y */
  while(temp < y)
    {
      result = x * result;
      temp++;
    } 
  return (result);
}
