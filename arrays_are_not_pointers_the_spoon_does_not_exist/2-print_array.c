#include "my_functions.h"
void print_array(int *a, int n)	{

/* Write a function that prints each element of an array of integers. Prototype: void print_array(int *a, int n);
where n is the number of elements of the array. Numbers must be separated by comma followed by a space. Function \
must display a \n after printing all the elements. The numbers should be displayed in the same order as they are \
stored in the array. If n is 0 or less, you must display a new line \n */

  int temp = 0;
  int digit = 0;
  int i;

  for (i = 0; i < n; i++) {
    /* Reversing number */
    while (a[i] > 0) {	
      temp = temp * 10;
      temp = temp + (a[i] % 10);
      a[i] = a[i]/10;
    }
    /* Splitting number */
    while (temp > 0) {
      digit = temp % 10;
      print_char(digit + '0');
      temp = temp/10;
    }
    if(i < 4) {
    print_char (',');
    print_char (' ');
    } else {
    print_char ('\n');
    }
  }
}

