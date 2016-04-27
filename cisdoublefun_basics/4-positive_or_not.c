/* Function that takes an integer as argument and prints accordintly */
#include "my_functions.h"

void positive_or_not(int n)
{
  /* Print P if number is positive */
  if(n > 0)
    {
      print_char('P');
    }
  /* Print Z if number is zero */
  if(n == 0)
    {
      print_char('Z');
    }
  /* Print N if number is negative */
  if(n < 0)
    {
      print_char('N');
    }
}
