/*
allocate a new node and link it to a list
*/
#include <stdlib.h>
#include "list.h"

char *string_copy(char *);
int find_length(char *);
struct List *find_end_of_list(struct List **);

int add_node(List **list, char *content)
{
  struct List *pointer_to_node;
  struct List *pointer_to_current_tail;

  pointer_to_node = malloc(sizeof(struct List));
  if (pointer_to_node == NULL) {
    return (1);
  }
  pointer_to_node->str = string_copy(content);
  pointer_to_node->next = NULL;

  if (list == NULL) { /* i.e. if list is empty */
    *list = pointer_to_node;
    return (0);
  }
  /* ELSE: find current last node & make it point to newly-allocated node
  instead of NULL so new node is last node */
  pointer_to_current_tail = find_end_of_list(list);
  pointer_to_current_tail->next = pointer_to_node;
  return (0);
}

/*
string_copy finds the length of a given string,
allocates space for a copy of the string,
loops through the string to copy its char values into the allocated space,
and returns the string.
*/

char *string_copy(char *s)
{
  int i;
  int length;
  char *copy;

  length = find_length(s);
  copy = malloc(sizeof(char) * length);
  for (i = 0; i < length; i++) {
    copy[i] = s[i];
  }
  return (copy);
}

/*
find_length returns the length of a string (str = array of chars)
by first looping through a given string
and incrementing up for every character until reaching '\0'.
*/

int find_length(char *str)
{
  int i;

  for (i = 0; str[i] != '\0'; i++) {
  }
  return (i);
}

/*
find_end_of_list takes the pointer to the head of a list /list/,
and proceeds to the /next/ pointer in each node in the list,
until it reaches a NULL pointer.
returns the pointer to the current last node in the list.
*/
struct List *find_end_of_list(struct List **list)
{
  struct List *pointer_to_node;

  pointer_to_node = *list; /* initialize pointer as head-of-list node */
  while (pointer_to_node->next != NULL) {
    pointer_to_node = pointer_to_node->next;
  }
  return pointer_to_node;
}
