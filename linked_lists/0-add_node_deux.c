/*
allocate a new node and link it to a list
*/

#include <stdlib.h>
#include "list.h"
#include "my_functions.h"

char *string_copy(char *s);
int find_length(char *str);

int add_node(List **list, char *content)
{
  List *new_node; /* pointer holds address of new node */

  new_node = malloc(sizeof(List)); /* allocate space in memory to hold new node */
  if (new_node == NULL) { /* raise error if new_node is NULL */
      return (1);
    }
  new_node->str = string_copy(content); /* initialize all data of new node. 1) duplicate the str "content" */
                                    /* 2) then store addr of newly allocated str content in element 'str' of our new_node */
  new_node->next = *list; /* 3) make the new_node 'next' pointer point to the current 1st element of our list */
  *list = new_node; /* 4) make the pointer 'list' point to the new_node so the new_node will now be the 1st node of our list */
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
