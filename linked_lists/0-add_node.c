#include "list.h"
#include <stdlib.h>
#include "my_functions.h"

int stringlen(char *str);
char *strcopy(char *dest, char *src);
/* Function adds a node to the list */
int add_node(List **list, char *content)
{
  char *copy_of_str;
  int string_len;
  /* Declaring new ptr to List; ptr will hold addr of our new node */
  List *node; 
  /* Allocate enough space in memory to hold new node */
  node = malloc(sizeof(List));
  if(node == NULL) /* If malloc function fails, raise an error */
    return (1);
  /* Copy content given as a parameter into a newly allocated space in memory */
  string_len = stringlen(content);
  copy_of_str = malloc(sizeof(char) * string_len);
  if(copy_of_str == NULL)
    return NULL;
  copy_of_str = strcopy(copy_of_str, content);
  /* Initialize all the data of the new node */
  node->str = copy_of_str;
  /* Make the new node 'next' ptr point to the current first element of our list */
  node->next = *list;
  /* Make ptr 'list' point to the new node, so the new node will now be the first node of our list */
  *list = node;
  return(0);
}

/* Copy src string into dest string */
char *strcopy(char *dest, char *src)
{
  int i;
  
  for(i = 0; src[[i] != '\0'; i++)
    {
      dest[i] = src[i];
    }
  dest[i] = '\0';
  return (dest);
}

/* Find length of string */
int stringlen(char *str)
{
  int i;

  for(i = 0; str[i] != '\0'; i++)
    {
    }
  return (i);
}
