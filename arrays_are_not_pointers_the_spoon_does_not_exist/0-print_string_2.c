#include "my_functions.h"
void print_string_2(char *str)
/* Write a function that prints one char out of 2 of a string. Prototype: void print_string_2(char *str); The function should print only one character out of two starting with the first one */

{
  int c;

  for (c = 0; str[c]!='\0'; c++) { /* str[c] is the same as *(str + c) */
    if (c % 2 == 0) { /* c % 2 computes the remainder when c is divided by 2 */
      print_char(*(str + c));}
  }
  
  /* trial one output experiment: str: 0 2 4 6 8
     printf("str: %c %c %c %c %c\n", str[0], str[2], str[4], str[6], str[8]); */
}
  
