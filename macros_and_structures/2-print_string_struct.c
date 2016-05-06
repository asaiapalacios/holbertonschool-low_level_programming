/* Print str followed by comma & space; then print length followed by \n */
#include "my_functions.h"
#include "str_struct.h"
void print_number(int n);

void print_string_struct(struct String *str)
{
int i;

for(i=0;str->str[i] !='\0'; i++)
  {
   print_char(str->str[i]);
  }
   print_char(',');
   print_char(' ');
   print_number(str->length);
   print_char('\n');
}

/* Example to access particular char w/in str w/in data structure: (str->str[i]) = "H" */
