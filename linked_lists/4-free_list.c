/*
function free_list takes a pointer as first node in the list,
reassigns head pointer to the next node in the list,
repeats process until reaching the end of the list,
each time freeing 1) the str in the node; and 2) the node itself;
*/
#include <stdlib.h>
#include "list.h"

void free_list(List *list)
{
  List *pointer_to_node;

  while (list != NULL) {
    pointer_to_node = list;
    list = pointer_to_node->next;
    free (pointer_to_node->str);
    free (pointer_to_node);
  }
}
