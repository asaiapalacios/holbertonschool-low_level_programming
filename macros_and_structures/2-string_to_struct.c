/* Store string and its length in newly allocated structure; return address of this structure */
#include <stdlib.h>
#include "str_struct.h"
int str_len(char *str){
  int len;
  len = 0;
  while(str[len] != '\0'){
    len++;
  }
  return(len);
}
struct String *string_to_struct(char *str){
  struct String *string;
  int length;
  length = str_len(str);
  /* Value is the address of 1st element of space stored in memory for struct String */
  string = malloc(sizeof(struct String));
  if(string == NULL) /* If function fails, return NULL */
    return (NULL);
  /* Pointer str accesses elements string and length w/its proper assigned value */
  string->str = str;
  string->length = length;
  /* Return address of structure (pointer to the string)*/
  return (string);
}
