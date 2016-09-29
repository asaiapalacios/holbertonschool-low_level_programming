/*
function that prints string in each node
by looping through the list
*/
#include <stdlib.h>
#include "list.h"

int print_char(char);
void print_string(char *s);
/*
print string in each node by looping through the list
*/
void print_list(List *list)
{
  struct List *pointer_to_node;

  if (list == NULL) { /* if list is empty, print next line */
    print_char ('\n');
  }
  pointer_to_node = list; /* assign pointer to the head of the list */
  while (pointer_to_node->next != NULL) {
    print_string (pointer_to_node->str);
    print_char (',');
    print_char (' ');
    pointer_to_node = pointer_to_node->next;
  }
  print_string (pointer_to_node->str); /* else print last node's string */
  print_char ('\n');
}
/*
function loops through string input
and prints every character employing print_char function
*/
void print_string (char *s)
{
  int i;

  for (i=0; s[i] != '\0'; i++) {
    print_char (s[i]);
  }
}
