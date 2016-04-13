#include <stdlib.h>
#include "my_functions.h"
/* Write a function that returns a pointer to a newly allocated space in memory */
char *string_dup(char *str) {
  char *s = NULL;
  int j;
 
  s = malloc(sizeof(*str));
/* If string_dup fails, return NULL */
  if(str == NULL) {
    return NULL;
 }
  for(j=0; str[j] !='\0'; j++) {
    s[j] = str[j];
 }
return s;
}
