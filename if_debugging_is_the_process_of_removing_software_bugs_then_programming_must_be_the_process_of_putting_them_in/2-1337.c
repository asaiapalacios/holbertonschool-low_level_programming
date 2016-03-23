#include "my_functions.h"

char *leet(char *j) {
  int i;

  for(i=0; j[i]!='\0'; i++){
    if((j[i]>='a' && j[i]<='z') || (j[i]>='A' || j[i]<='Z')){
      if(j[i]=='a' || j[i]=='A'){
	j[i]='4';}
      else if(j[i]=='e' || j[i]=='E'){ /* replacing respective characters to their new values */
	j[i]='3';}
      else if(j[i]=='o' || j[i]=='O'){
	j[i]='0';}
      else if(j[i]=='t' || j[i]=='T'){
	j[i]='7';}
      else if(j[i]=='l' || j[i]=='L'){
	j[i]='1';}
    }
  }
  return(j);
}
