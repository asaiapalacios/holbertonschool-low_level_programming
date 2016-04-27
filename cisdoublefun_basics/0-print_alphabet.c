/* Function that prints the alphabet in lowercase */
#include "my_functions.h" 

void print_alphabet(void)
{
  char c;

  /* Use variable c, which holds changing character value, in print_char function */  
  c = 'a';
  while (c <= 'z')
    {
      print_char(c);
      c++;
    }
}

