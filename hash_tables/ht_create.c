#include <stdlib.h>
#include "hashtable.h"

/* Create a function that creates a new HashTable */
HashTable *ht_create(unsigned int size)
{
  unsigned int i;
  HashTable *new_table;

  new_table = malloc(sizeof(HashTable);
     if (new_table == NULL)
       {
	 return NULL; /* To check if memory is allocated else error message */
       }
  /* Allocate array element of the HashTable to contain size cells */
  HashTable->array = malloc(sizeof(List *)*size);
     if (HashTable->array == NULL)
       {
	 return NULL; /* To check if memory is allocated else error message */
       }
     for(i=0; i<size; i++)
       {
	 HashTable->array[i] = NULL;
       }
     HashTable->size = size;
  return new_table;
}
