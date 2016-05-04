#include <stdio.h>
/* Program that prints all arguments it receives, starting from the last one */
int main(int argc, char *argv[])
{
  int i;

  i = argc-1;
  while(i >= 0)
    {
      printf("%s\n", argv[i]); /* Displays arguments starting from end of program argv[13] */
      i--;
    }
  return (0);
}
