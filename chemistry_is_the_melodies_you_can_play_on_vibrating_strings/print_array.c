#include "my_functions.h"
void print_array(int *a, int n) {
  int temp = 0;
  int digit = 0;
  int i;
  int j;
  
  for (i = 0; i < n; i++) {
    j = a[i];
    if(j == 0) {
      print_char(0+'0');
    }
    while (j > 0) { /* Reversing number */
      temp = temp * 10;
      temp = temp + (j % 10);
      j = j/10;
    }
    while (temp > 0) { /* Splitting number */
      digit = temp % 10;
      print_char(digit + '0');
      temp = temp/10;
    }
    if(i < n-1) { /* n-1 = last index number */
      print_char (',');
      print_char (' ');
    } else {
      print_char ('\n');
    }
  }
}
