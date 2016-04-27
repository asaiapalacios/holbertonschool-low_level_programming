/* Write a function that prints all the numbers of base 16, from 0 to F */
#include "my_functions.h"

void print_base16(void)
{
  char j;
  
  /* '0' is equivalent to 48 in decimal form in ascii table */
  j = '0';
  while(j <= '9')
    {
      print_char(j);
      j++;
    }
  /* 65 equivalent to 'A' on ascii table */
  j = 65;
  while(j <= 70)
    {
      print_char(j);
      j++;
    }
}
