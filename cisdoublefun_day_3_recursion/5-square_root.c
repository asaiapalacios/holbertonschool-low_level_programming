/* Recursive function that returns the natural square root of a number */
#include "my_functions.h"

int square_root(int n)
{
  int x;
  int y;

  x = n;
  y = 1;
  while(x> y)
    {
      x =(x + y)/2;
      y =n/x;
    }
  return x;
}
