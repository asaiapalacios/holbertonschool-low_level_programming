/*
create a new list from the command line arguments
*/

#include <stdlib.h>
#include "list.h"
#include "my_functions.h"

/*
params_to_list takes in an array of string arguments /av/,
creates a list with a node for each string argument,
and returns the pointer to the first node of the list.
*/

List *params_to_list(int ac, char **av)
{
  int i;
  struct List *pointer_to_head;

  pointer_to_head = NULL;
  for (i = 1; i < ac; i++) {
    add_node(&pointer_to_head, av[i]);
  }
  return pointer_to_head;
}

int add_node(List **list, char *content)
{
  struct List *pointer_to_node;
  struct List *pointer_to_current_tail;

  pointer_to_node = malloc(sizeof(struct List));
  pointer_to_node->next = NULL;

  if (*list == NULL) { /* if list is NULL (is empty) */
    *list = pointer_to_node; /* make list point to pointer_to_node */
    /* return (0); */
  }
  pointer_to_current_tail = find_end_of_list(list); /* ELSE: find current tail node in the list and make it point to the newly-allocated node instead of NULL. */
  pointer_to_current_tail->next = pointer_to_node;
  return (0);
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

  pointer_to_node = *list; /* pointer_to_node as pointer to head of the list */
  while (pointer_to_node->next != NULL) {
    pointer_to_node = pointer_to_node->next;
  }
  return pointer_to_node;
}

/*
string_copy finds the length of a given string,
allocates space for a copy of the string,
loops through the string to copy its char values into the allocated space,
and returns the string.
*/

/* char *string_copy(char *s)
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
} */

/*
find_length returns the length of a string (str = array of chars)
by first looping through a given string
and incrementing up for every character until reaching '\0'.
*/
/*
int find_length(char *str)
{
  int i;

  for (i = 0; str[i] != '\0'; i++) {
  }
  return (i);
} */
