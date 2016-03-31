#include "my_functions.h"

char *cap_string(char *k) {
  int i;

  for(i=0; k[i]!='\0'; i++) {
    if(k[i]==' ' || k[i]=='\t' || k[i]=='\n') { 
      if(k[i+1] >= 'a' && k[i+1] <= 'z') { /* +1 = capitalize 1st character of a word in the string after [i] and after ' ', \t, and \n */
      k[i+1]=k[i+1]-32;
      }
    }
  }
  return (k);
}
