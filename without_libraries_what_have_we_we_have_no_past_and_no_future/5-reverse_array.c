#include "my_functions.h"

/* Write a function that reverses the content of an array of integers */
void reverse_array(int *a, int n) {

  int i;
  int j;
  int temp[100]; /* input any element number (100 in this case) */
    
  for(i = 0; i < n; i++)
    {
      temp[i] = a[i]; /* store a[i] into temp[i] */
    } 
  for(i = 0, j = (n-1); i < n; i++, j--) /* n-1 indicates index number value */
    {
      a[i] = temp[j]; /* store temp[j] into a[i] */
    }
}
  
