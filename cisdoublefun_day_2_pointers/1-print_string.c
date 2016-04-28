/* Write a function that prints a string */
#include "my_functions.h"

void print_string(char *str)
{
  int i;
  
  i = 0;
  /* When while statement is false (is not different to '0'), exit loop */
  while (str[i] != '\0')
    {
      print_char(str[i]);
      i++;
    }
}
