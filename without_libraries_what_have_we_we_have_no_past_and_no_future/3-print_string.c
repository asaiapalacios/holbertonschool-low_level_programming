#include "my_functions.h"

void print_string(char *str)
/* Write a function that prints a string */
  
{ 
  int c;
  
  for (c = 0; str[c]!='\0'; c++) { /* str[c] is the same as *(str + c) */
    print_char(*(str + c));
  }
}

