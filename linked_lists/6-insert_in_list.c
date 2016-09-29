/*
*/
#include <stdlib.h>
#include "list.h"

int add_node(List **list, char *str);
struct List *find_end_of_list(struct List **);
void print_string(char *);
int insert_new_node(List *, char *content, List);
char *string_copy(char *);
List *find_node_prior(List *, int);

int insert_in_list(List **list, char *content, int index)
{
  List *pointer_to_node_prior;
  List *next_to_assign;

  if (index < 0) { /* handle index parameter less than 0 */
    return (0);
  }
  if (index == 0 || *list == NULL) {
    return add_node(list, content); /* ELSE: add node -> new head node */
  }
  pointer_to_node_prior = find_node_prior(*list, index); /*ELSE: find & store addr of prior node*/
  if (pointer_to_node_prior == NULL) {/* if index req'd greater than size of list */
    next_to_assign == NULL; /* new node (next_to..) equiv. to tail of list */
    pointer_to_node_prior = find_end_of_list(list);
  } else {
    next_to_assign = pointer_to_node_prior->next; /* store next value of nde prior */
  }
  /* create nde we want to insert, w/input str & the next val of nde prior, & insert in list */
  return insert_new_node(pointer_to_node_prior, content, next_to_assign);
}
