#include <stdio.h>
int open(char *filename, O_RDWR, S_IREAD);

int main()
{
  FILE *file_pointer; /* Create file pointer */
  char ch; /* Create character variable to store character read from the file */

  file_pointer = fopen(filename, "r"); /* To open a file, use function fopen() */
  /* filename is a string that holds the name of the file on disk */
  /* 2nd parameter: mode is a string representing how you want to open the file */

  if(file_pointer = NULL) /* To check whether our prog has successfully opened file or not */
    {
      printf("File is not opened successfully");
    }
  else /* If file_pointer has been opened successfully, read from this file character by character */
    {
      while() /* Read file until we read the end of the file */
	{
	  ch = fgetc(file_pointer); /* Read a character from the file & store in our ch var; read char from the stream. 
				       If read end of file, return EVOI */
	  putchar(ch); /* Print out character we have passed */ 
	}
    }
  return 0;
  close();
}
