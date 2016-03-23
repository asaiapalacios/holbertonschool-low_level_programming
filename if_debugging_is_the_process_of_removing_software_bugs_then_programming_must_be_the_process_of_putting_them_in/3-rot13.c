#include "my_functions.h"
char *rot13(char *v){

  int i;
  int tmp = 0;

  for(i=0; v[i] != '\0'; i++){
    if(v[i]>= 'A' && v[i] <= 'Z'){
      if(v[i] + 13 > 'Z'){ /* add 13 to replace character to new value */
	tmp = (v[i] + 12) - 'Z';
	v[i]= tmp + 'A';
      }
      else{
	v[i] = v[i] +13;
      }}
    else if (v[i]>= 'a' && v[i]<= 'z'){
      if(v[i]+13 >'z'){ /* add 13 to replace character to new value */
	tmp = v[i] +12 - 'z';
	v[i] = tmp + 'a';}
      else{
	v[i] = v[i] + 13;}
    }
  }
  return(v);
}


