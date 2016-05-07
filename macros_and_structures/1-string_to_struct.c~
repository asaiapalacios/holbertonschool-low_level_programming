/* Store string and its length in newly allocated structure; return address of this structure */
#include <stdlib.h>
#include "str_struct.h"
#include "my_functions.h"
/* Function to duplicate string */
char *string_dup(char *str) 
{
  char *s;
  int j, len_of_str;

  len_of_str = 1;
  while(str[len_of_str-1] !='0') { 
      len_of_str++;
  }
  s = malloc(sizeof(*str) * len_of_str);
/* If string_dup fails, return NULL */
if(str == NULL) 
  return NULL;
 for(j=0; j < len_of_str; j++) {
    s[j] = str[j];
 }
 return (s);
}
/* Function to obtain length of string */
int str_len(char *str)
{
  int len;
  for(len = 0; str[len] != '\0'; len++)
    {
    }
  return(len);
}
/* Store string and its length in newly allocated structure; return address of this structure */
struct String *string_to_struct(char *str)
{
  struct String *string;
  int length;
  char *dup_str;
  
  length = str_len(str);
  /* Value is the address of 1st element of space stored in memory for struct String */
  string = malloc(sizeof(struct String));
  /* Duplicate string and store its value to a variable */
  dup_str = string_dup(str);
  if(string == NULL) /* If function fails, return NULL */
    return (NULL);
  /* Pointer str accesses elements string and length w/its proper assigned value */
  string->str = dup_str;
  string->length = length;
  /* Return address of structure (pointer to the string)*/
  return (string);
}
