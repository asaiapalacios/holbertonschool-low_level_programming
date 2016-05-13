/*
 * CREATE A SHELL
 */

/*
int print_char(char c);

int main(int ac, char **av, char **env)
{
  pid_t pid;
  char *exec_argv[] = {"absolute_path_here", "argument_here", NULL};
  int status; */

/*
 * PRINT A PROMPT
 */
#include <unistd.h>
#include "libshell.h"

char *read_line(const int fd);
/* char **string_split(const char *str, char separator); */

int print_char(char c) {
  return (write(1, &c, 1));
}

/*
 * READ LINE FUNCTION:
 * allocate buffer space, read some characters using read() and returns a pointer character
 */
char *read_line(const int fd) {

}

int main() {
  char *command_line;

  while (1) {
    print_char('>');
    print_char('\n');
    /*
     * CALL A FUNCTION TO READ A LINE
     */
    command_line = read_line(const int fd); /* returns a pointer to a char */

     /*
      * CALL A FUNCTION TO SPLIT THE LINE INTO ARGUMENTS
      */
    /* NOTES BELOW:
     * command_args = string_split(const char *str, char separator)
     * execute if pid is correct
     */

  }
return(0);
}
