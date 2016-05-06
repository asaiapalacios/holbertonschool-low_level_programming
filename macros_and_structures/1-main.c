#include "str_struct.h"
#include <stdio.h>

struct String *string_to_struct(char *str);
void print_string_struct(struct String *str);

int main(void)
{
  struct String *str;

  str = string_to_struct("Holberton");
  /* print_string_struct(str);*/
  printf("%s, %d\n", str->str, str->length);
  return (0); 
}
