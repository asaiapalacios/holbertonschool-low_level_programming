/* Write a function that prints the last digit of an integer */
#include "my_functions.h"

void print_last_digit(int n){
  int x;
  char a;

    if ( n < 0 )
      {n = n * -1;
      }
       x = n % 10;
       a = x + '0';
       print_char(a);
}
