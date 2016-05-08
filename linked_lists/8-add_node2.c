#include "list.h"
#include <stdlib.h>
#include "my_functions.h"

int stringlen(char *str);
char *strcopy(char *dest, char *src);
List *find_last_node(List **list);

/* Function adds a node to the list */
int add_node(List **list, char *content)
{
  char *copy_of_str;
  int string_len;
 
  List *node;   /* Declaring new ptr to List; ptr will hold addr of our new node */
  List *last;

  /* Allocate enough space in memory to hold new node */
  node = malloc(sizeof(List));
  if(node == NULL) /* If malloc function fails, raise an error */
    return (1);
  /* Copy content given as a parameter into a newly allocated space in memory */
  string_len = stringlen(content);
  copy_of_str = malloc(sizeof(char) * string_len);
  /* COMMENTED OUT
     if(copy_of_str == NULL)                                         
     return NULL; 
   */
  copy_of_str = strcopy(copy_of_str, content);
  
  /* Initialize all the data of the new node.
     2nd node's str element holds the pointer to the newly allocated & 
     stored string (&copy_of_str)
  */
  node->str = copy_of_str;
  
  /* Make the 1st node (list is pnting to 1st node) 'next' ptr point 
     to the first element of 2nd node (by accessing its addr).
     Need if statement to ensure 1st node points to addr of 2nd node 
  */ 
  if(*list == NULL)
    {
      *list = node;
    }
    /* ELSE, find last node and designate the new node to follow */
    last = find_last_node(list);
    last->next = node;
    }
  /* Make ptr 'next' of 2nd node point to NULL, 
     so the 2nd node will now be the last node of our list
  */
  node->next = NULL;
  return(0);
}

/* Copy src string into dest string */
char *strcopy(char *dest, char *src)
{
  int i;
  for(i = 0; src[i] != '\0'; i++)
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
  for(i = 0; str[i] != '\0'; i++) {}
  return (i);
}

/* find_last_node takes the pointer to the front of the list;
continues to next pointer in each node in the list until reaching 
a NULL pointer. 
*/
List *find_last_node(List **list)
{
  List *node;

  node = *list; /* Node pointer points to the front/beginning of the list */
  while(node->next != NULL) 
    {
      node = node->next; /* We want node->next to point to nothing (NULL) */
    }
  return node; /* Return pointer to the current last node pointer in the list */
}
