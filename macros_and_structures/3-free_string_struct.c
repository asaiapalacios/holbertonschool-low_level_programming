#include "str_struct.h"
#include <stdlib.h>
/* Function that frees a struct String */
void free_string_struct(struct String *str)
{
  /* Example of free malloc syntax: void free(void *ptr); */
  free((*str).str); /* Or: free(str->str) */
  free(str);
}

