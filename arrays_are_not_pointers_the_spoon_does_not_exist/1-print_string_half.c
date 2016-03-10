#include "my_functions.h"
void print_string_half(char *str)

{ 
  int i = 0; /* initialize length of string */
  int j; /* variable where I stored 2nd half of string when number of characters is odd */
    
  while (str[i]!= '\0') { /* stop point: when length of string reaches '\0' after incrementation */
    i++;
  }

  if(i % 2 == 0) { /* if number of characters is even, divide by half */
    j = i/2;
  }

  else if(i % 2 != 0) { 
    j = (i - 1)/2 + 1; /* add 1 to increment start point from 5 to 6 */
  }

  for(; j < i; j++) { /* 6 < 10 */
    print_char(str[j]); /* prints characters 6789 */
  }
}

