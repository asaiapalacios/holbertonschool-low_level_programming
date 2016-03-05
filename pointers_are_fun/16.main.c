#include <stdio.h>

int main(void)
{
  int a[98]; /* array */

  printf("a: %p\n", a);
  printf("&a[0]: %p\n", &a[0]);
  return (0);
}
