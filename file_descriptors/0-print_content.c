#include <fcntl.h>

int main(void)
{
  int fd;

  fd = open("/Users/17/holbertonschool-low_level_programming/file_descriptors", );
  if (fd == -1)
    {
      perror ("open");
      return (1);
    }
  printf ("File opened!\n");
  close (fd);
  return (0);
}
