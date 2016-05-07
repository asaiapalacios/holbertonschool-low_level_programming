#include <stdlib.h>
/* Write a function that returns a pointer to a newly allocated space in memory */
char *string_dup(char *str) {
  char *s;
  int j;
  int len_of_str;

  len_of_str = 1;

  while(str[len_of_str-1] !='0') {
    len_of_str++;
  }
  s = malloc(sizeof(*str) * len_of_str));
/* If string_dup fails, return NULL */
if(str == NULL) {
  return NULL;
 }
for(j=0; j < len_of_str; j++) {
  s[j] = str[j];
 }
return (s);
}
