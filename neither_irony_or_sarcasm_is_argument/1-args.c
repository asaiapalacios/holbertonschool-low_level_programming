/* Write a program that prints all arguments it receives. All arguments should be printed, including the first one, One argument per line, ending by a new line */

#include <stdio.h>

int main(int ac, char **av)
{
  int i;
  for(i = 0; i < ac; i++)
    {
      printf("%s\n", av[i]); /* Prints string arguments (line after line) from where they are stored (av[i]) */
    }
  return 0;
}
