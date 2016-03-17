#include "my_functions.h"
void print_diagonal(int n){
/* Write a function that draws a diagonal line on the terminal where n is the number of times the character \ should be printed. The diagonal should end with a new line \n. If n is 0 or less, the function should print a \n only */
  
  int i, j; /* var i is in column position & var j is in line/row */
  
  if (n <= 0) {
    print_char('\n');
  }
  else {
    for(i = 1; i <= n; i++){
      for(j = 1; j < i; j++){ /* print spaces when j < i */
	print_char(' ');
      }
      print_char('\\');
      print_char('\n');
    }
  }
}
