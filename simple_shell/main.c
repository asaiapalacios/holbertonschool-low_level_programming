/*
 * BUILD YOUR OWN SHELL INTERPRETER
/*
int main(int ac, char **av, char **env)
{
  char *exec_argv[] = {"absolute_path_here", "argument_here", NULL};
}*/

#include <unistd.h>
#include "libshell.h"
#include <stdlib.h>

char *read_line(const int fd);
char **string_split(const char *str, char separator);

int print_char(char c) {
  return (write(1, &c, 1));
}


int main() {
  char *command_line; /* points to a malloced array */
  char command_args;
  pid_t pid;
  int status;

  /*
   * PRINT A PROMPT
   */
  do { /* prints prompt at least once */
    print_char('>');
    print_char(' ');
    /*
     * CALL A FUNCTION TO READ A LINE:
     * store return stdin of read_line in variable command_line
     */
    command_line = read_line(0);
     /*
      * CALL A FUNCTION TO SPLIT THE LINE INTO ARGUMENTS
      * returns a pointer to an array of strings
      * stores pointer in variable command_args
      */
    command_args = string_split(command_line, ' ');
    /* EXECUTE THE ARGUMENTS */
    if (/*is_a_built-in_command*/) {
      /* execute built-in command */
    }
    if ((pid = fork()) == -1) {
      perror("fork");
      return (1);
    }
    if (pid == 0) { /* fork() returns value 0 to child process */
      /* execute if pid is correct */
    }
    else { /* fork() returns PID of created child to parent process */
      wait(&status)
    }

     /*
      * FREE LINE (malloced array) AND ARGUMENTS
      */
    free(command_line);
    free(command_args);

  } while(0);
return(0);
}
