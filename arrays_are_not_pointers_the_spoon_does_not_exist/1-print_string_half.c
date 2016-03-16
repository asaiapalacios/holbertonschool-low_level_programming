#include "my_functions.h"
void print_string_half(char *str)
/* Write a function that prints half of a string. Prototype: void print_string_half(char *str); The function should print the second half of the string. If the number of characters is odd, the function should print the (length_of_the_string - 1) / 2 last characters */  

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

