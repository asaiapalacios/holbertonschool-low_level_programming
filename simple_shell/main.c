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
#include <sys/types.h>
#include <sys/wait.h>

char *read_line(const int fd); /* can delete b/c prototype in libshell.h */
char **string_split(const char *str, char separator); /* can delete b/c "" */

int print_char(char c) {
  return (write(1, &c, 1));
}

int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av, char **env) {
  char *command_line; /* points to a malloced array */
  char **command_args;
  pid_t pid;
  char *exec_argv[] = {"/bin/ls", "-l", NULL};
  int status;

  do { /* PRINT A PROMPT at least once */
    print_char('>');
    print_char(' ');
    /*
     * CALL A FUNCTION TO READ A LINE: store return addr of stdin of read_line in variable command_line
     */
    command_line = read_line(0);
     /*
      * CALL A FUNCTION TO SPLIT THE LINE INTO ARGUMENTS: returns a pointer to an array of strings; stores pointer in variable command_args
      */
    command_args = string_split(command_line, ' '); /* Splits string from stdin into arguments
    /* EXECUTE THE ARGUMENTS (i.e. launch a program)
     * we need to fork to create a child process
     * that will execute non-built-in programs w/in our program using execve() function
     */
    status = execute(args);
    if (/*is_a_built-in_command*/) {
      /* execute built-in command */
    }
    if ((pid = fork()) == -1) { /* handles error from forking */
      perror("fork");
      return (1);
    }
    if (pid == 0) { /* child process starts execution; fork() returns value 0 to child process */
      execve(exec_argv[0], exec_argv, env);
    }
    else { /* fork() returns PID of created child to parent process; when child terminates, parent process continues its execution */
      wait(&status); /* waits for child to terminate before displaying prompt & read_line again */
    }

     /*
      * FREE LINE (malloced array) AND ARGUMENTS
      */
    free(command_line);
    free(command_args);

  } while(0);
return(0);
}
