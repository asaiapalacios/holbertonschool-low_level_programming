#include "my_functions.h"
/* Write a function that changes all lowercase letters of a string to uppercase.
   Prototype: char *uppercase_string(char *); */

char *uppercase_string(char *j) {
  int i;
  
  for(i=0; j[i]!='\0'; i++) { 
    if(j[i] >= 'a' && j[i] <= 'z') {
      j[i] = j[i] - 32; /* using ASCII table; p[i] value equals the respective capital letter after subtracting by 32 */
    }
  }
  return(j);
}
