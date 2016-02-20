/* Write a function that prints (on one line) all possible combinations of two different digits */
#include <unistd.h>

int main(void)
  {
    int i;
    int j;
    
  for ( i = 0; i < 9; i++ )
    {
    for ( j = i + 1; j <= 9; j++)
      {
      print_char ( i + '0');
      print_char ( j + '0');
      }
    }
  }
