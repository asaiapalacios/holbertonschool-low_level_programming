#include "my_functions.h"
#include <stdlib.h>
/* Write a function that concatenates two strings */
char *string_nconcat(char *s1, char *s2, int n) {
  char *s7;
  int len1, len2, j;
  len1 = 1;
  len2 = 1;

  while(s1[len1-1] !='0') {
    len1++;}
  while(s2[len2-1] !='0') {
    len2++;}

  s7 = malloc(sizeof(*s1) * ((len1-1) + len2));
/* Return pointer contains s1, first n bytes & null terminated */
  if((s1 == NULL || s2 == NULL)) {
    return NULL;}

  for(j = 0; j < ((len1-1)+n); j++) {
    if(j < (len1-1)) {
      s7[j] = s1[j];
    } else {
      s7[j] = s2[j-(len1-1)];}
  }
  return s7;
}
