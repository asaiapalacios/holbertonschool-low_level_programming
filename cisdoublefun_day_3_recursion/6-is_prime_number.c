/* Recursive function that returns 1 if a number is a prime number, 0 otherwise */
#include "my_functions.h"

int is_prime_number(int n, int i)
{
  if(i == 1)
    {   /* When i reaches 1, n is prime */
      return (1);
    } 
  else if (n % i == 0)
    {  /* If n is divisible by any value of i */
      return (0);
    }
  return prime_number(n, (i - 1));
}

int is_prime_number(int n)
{
  if(n == 1)
    {
      return (0);
    } 
  else if (n < 0)
    {
      return (0);
    }
  return prime_number(n, (n - 1)); /* Calls the recursive function */
}
