#include "my_functions.h"

void print_combination_1(void){
  int n;
  for ( n=0; n<10; n++ ) { /* int n must print integers 0-9 */
      if (n==9)
	{print_number(n);
	 return; /* statement terminates execution of function */
	}
      print_number(n);
      print_char(',');
      print_char(' ');
    }
}
