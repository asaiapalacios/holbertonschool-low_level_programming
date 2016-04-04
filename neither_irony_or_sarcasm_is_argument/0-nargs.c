/* #include <stdlib.h> */
#include <stdio.h>

int main(int ac, char **av[])
{
  int i;
  int sum = 0;
  
  printf("ac = %d\n", ac);

  if(ac > 1)
    {
      for(i = 1; i < ac; i++)
	{
	  printf("av[%d] = %s\n", i, av[i]);
	  sum += atoi(av[i]);
	}
      printf("Total = %d\n", sum);
    }
  return 0;
}
