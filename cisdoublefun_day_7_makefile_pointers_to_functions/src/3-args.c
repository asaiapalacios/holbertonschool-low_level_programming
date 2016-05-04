#include <stdio.h>
/* Program that prints all arguments it receives */
int main(int argc, char *argv[])
{
  int i;

  i = 0;
  while(i < argc)
    {
      printf("%s\n", argv[i]); /* Displays arguments starting from name of program argv[0] */
      i++;
    }
  return (0);
}
