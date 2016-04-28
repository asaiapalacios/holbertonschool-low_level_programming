/* Write a function that swaps the values of two integers */
#include "my_functions.h"

void swap_int(int *a, int *b)
{
  int temp;
  /* Send value stored in &b to temp */
  temp = *b;
  /* Send value stored in &a to *b or &b */
  *b = *a;
  /* Send value stored in temp to *a or &a */
  *a = temp;
}
