/* Function that frees a struct String */
#include "str_struct.h"
#include <stdlib.h>

void free_string_struct(struct String *str)
{
  /* Example of free malloc syntax: void free(void *ptr); */
  free((*str).str); /* Or: free(str->str) */
  free(str);
}

