/*
rev_list reverses the order of the list
by taking a pointer to the addr of the head of a list,
making each node point to its previous node,
and updating the pointer pointing to the lead node to point to last node.
*/
#include <stdlib.h>
#include "list.h"

void rev_list(List **list)
{
  List *previous_node_pointer;
  List *current_node_pointer;
  List *next_node_pointer;

  if (*list == NULL) {
    ;
  }
  previous_node_pointer = NULL;
  current_node_pointer = *list;

  while (current_node_pointer->next != NULL) {/* go over every node minus last */
    next_node_pointer = current_node_pointer->next;/* nxt ptr holds adr of crr nde */
    current_node_pointer->next = previous_node_pointer;/* crr node pts to prior nde */
    previous_node_pointer = current_node_pointer;
    current_node_pointer = next_node_pointer;
  }
  current_node_pointer->next = previous_node_pointer;/* last nde pts to prev nde */
  *list = current_node_pointer;/* ptr to the 1st node to point to last node */
}
