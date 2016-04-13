#include <stdlib.h>
#include "my_functions.h"
/* Write a function that concatenates two strings */
char *string_concat(char *s1, char *s2) {
  char *s7;
  int len1, len2, k;
  len1 = 1;
  len2 = 1;
  
  while(s1[len1-1] !='0') {
    len1++;}
  while(s2[len2-1] !='0') {
    len2++;}
  
  s7 = malloc(sizeof(*s1) * ((len1-1) + len2));
  /* Return NULL if function fails */
  if((s1 == NULL || s2 == NULL)) {
    return NULL;}

  for(k = 0; k < ((len1-1) + len2); k++) {
    if(k < (len1-1)) {
      s7[k] = s1[k];
    } else {
      s7[k] = s2[k-(len1-1)]; }
  }
  return s7;
}
