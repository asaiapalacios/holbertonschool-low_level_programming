#include "my_functions.h"

/* Write a function that prints the alphabet in lowercase */
void print_alphabet(void)

{
  char c;
  for (c = 'a'; c <= 'z'; ++c) /* Indicate parameters using relational operators */
	 print_char(c);
}
