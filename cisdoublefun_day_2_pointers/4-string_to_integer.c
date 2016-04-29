/* Write a function that returns the first number contained in a string */
#include "my_functions.h"

int string_to_integer(char *s)
{
  int i, sign, rest;
  long num;

  rest = 0;
  sign = 0;
  num = 0;
  i = 0;
  while(s[i] !='\0')
    {
      if(s[i] >= '0' && s[i] <= '9')
        {
              num = num * 10 + (s[i] - '0');
              rest = 1;
              i++;
        }
      else if(s[i] == '-') /* Count how many negative signs */
        {
          sign++;
          i++;
        }
      else /* Count the rest of char that are not num nor -+ signs */
        {
          if(rest == 1)
            {
              break;
            }
          else
            {
            i++;
            }
        }
    }
  if(sign % 2 == 1)
    {
      num = num * -1;
    }
  if(num > 2147483647 || num < -2147483648)
    {
      num = 0;
    }
  return((int)num); /* Number is converted to an int and returned as an int */
}
