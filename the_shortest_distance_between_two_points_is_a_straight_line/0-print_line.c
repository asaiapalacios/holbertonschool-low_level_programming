#include "my_functions.h"
void print_line(int n) {
/* Write a function that draws a straight line on the terminal where n is the number of times the character _ should be printed. The line should end with a new line \n. If n is 0 or less, the function should print a \n only */
  
  int i; /* i = '_' */

  for(i = 1; i <= n; i++) { 
       print_char('_');
  }
       print_char('\n');
}
