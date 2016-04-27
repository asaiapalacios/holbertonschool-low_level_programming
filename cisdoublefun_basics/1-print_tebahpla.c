/* Function that prints the alphabet in lower case and in reverse order */
#include "my_functions.h"

void print_tebahpla(void)
{
  char i;

  /* Use variable i, which holds changing character value, in print_char function */
  i = 'z';
  while( i >= 'a')
    {
      print_char(i);
      i--;
    }
}
