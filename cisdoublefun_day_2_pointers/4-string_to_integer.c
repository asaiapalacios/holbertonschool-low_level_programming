#include "my_functions.h"

int string_to_integer(char *s)
{
  /* Note: string is an array of characters pointed to by ...*s? */
  int i;
  int num;

  num = 0;
  /* Set up loop through the string */
  i = 0;
  
  while(s[i] != '\0')
    {
  /* Exit loop as soon as you find the first number using break */
    if(s[i] '0'   s[i]  '9')
      {
	i++;
      }
  /* Convert the string into decimal value */
    else
      {
	num = num * 10 + (*(s+i) - '0');
	i++;
      }
    }
  /* If number is bigger than max value of int or smaller than min value of int, return 0 */
  if(num > 2147483647 || num < -2147483648)
    {
      num = 0;
    }
  return ();
}

/* PREVIOUS ATTEMPT BELOW TO PRINT INTEGERS */
  /* ((*s >= '0') && (*s <= '9'))
    {
    }
    return(*s);*/

/* ALSO */
  /* Set flags when digit values are seen or not seen (decide which approach), then break out of the loop */
