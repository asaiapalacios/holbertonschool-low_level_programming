/*
Function that returns the number of node in a list.
*/
#include <stdlib.h>
#include "list.h"

/*
Loop through the node list, every node in the list until reaching NULL.
Return the number of node found in the linked list.
*/

int list_size(List *list)
{
  int i;
  struct List *pointer_to_node;

  pointer_to_node = list; /* Initialize pointer_to_node as head of the list */
  for (i = 0; pointer_to_node->next != NULL; i++) { /* Count the nodes not including the node that points to NULL (i.e. the last node) */
    pointer_to_node = pointer_to_node->next;
  }
  i++; /* count last node */
  return (i); /* return count */
}
