/*
 * FIND LENGTH OF STRING
 */
#include "my_functions.h"

int str_len(char *s) {
  int len;

  len = 0;
  while(s[len] !='\0') {
    len++;
  }
  return (len);
}
