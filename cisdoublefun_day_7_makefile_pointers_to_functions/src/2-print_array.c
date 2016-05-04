#include "my_functions.h" /* Write a function that prints each element of an array of integers */
void print_array(int *a, int n)	{ 
  int temp = 0;
  int digit = 0;
  int i;

  for (i = 0; i < n; i++) {
    while (a[i] > 0) {	/* Reversing number */
      temp = temp * 10;
      temp = temp + (a[i] % 10);
      a[i] = a[i]/10;
    }
    while (temp > 0) { /* Splitting number */
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

