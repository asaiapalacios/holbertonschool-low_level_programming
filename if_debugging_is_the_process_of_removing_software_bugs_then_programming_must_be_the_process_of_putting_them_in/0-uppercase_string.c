#include "my_functions.h"

char *uppercase_string(char *b){
  int i;
  int j;
  
  for(i=0; b[i]!='\0'; i++){
    if(b[i] >= 'a' && b[i] <= 'z'){
      j = b[i] - 32;
      print_char(j);
    }
    else{}
  }
  return(b);
}
