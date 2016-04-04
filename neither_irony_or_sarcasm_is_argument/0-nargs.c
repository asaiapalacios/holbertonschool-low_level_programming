/* Write a program that prints the number of arguments you passed to it. Your program should print a number, followed by a new line
 */

#include <stdio.h>

int main(int ac, char **av)
{
  int i;
  for(i = 1; av[i] !='\0'; i++);
     printf("%d\n", ac-1); /* Displays in output total counts of arguments minus name of the program */
  return 0;
}
