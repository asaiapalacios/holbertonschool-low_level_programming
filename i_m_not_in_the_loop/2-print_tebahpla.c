#include "my_functions.h"

/* Write a function that prints the alphabet in lower case and in reverse order */
void print_tebahpla(void)

{
  char c;
  for (c = 'z'; c >= 'a'; --c) /* Use greater than or equal to relational operator */
    print_char(c);
}
