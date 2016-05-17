/*
 * BUILD YOUR OWN SHELL INTERPRETER
 */
#include <unistd.h>
#include "libshell.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "my_functions.h"
#include <stdio.h>

int main (__attribute__((unused)) int ac, __attribute__((unused)) char **av, char **env) {
  char *command_line; /* points to a malloced array */
  char **command_args;
  pid_t pid;
  int status;
  char *print_env;
  int i;
  int j;
  char *path;

  do { /* PRINT A PROMPT at least once */
    print_char ('>');
    print_char (' ');
    /*
     * CALL A FUNCTION TO READ A LINE:
     * store return addr of stdin of read_line in variable command_line
     */
    command_line = read_line (0);
     /*
      * CALL A FUNCTION TO SPLIT THE LINE INTO ARGUMENTS:
      * returns a pointer to an array of strings; stores pointer in variable command_args
      */
    command_args = string_split (command_line, ' '); /* Splits string from stdin into arguments */
    /* EXECUTE THE ARGUMENTS (i.e. launch a program)
     * we need to fork to create a child process
     * that will execute non-built-in programs w/in our program using execve() function
     */

if (string_compare(command_line, "env") == 0) {
  for (i = 0; env[i] != '\0'; i++) {
    print_env = env[i]; /* store arrays in print_env */
    print_char ('\n');
      for (j = 0; env[j]; j++) {
        print_char (print_env[j]); /* print each character (string) of each array */
    }
  }
  print_char ('\n');
}

if(string_compare(command_args[0], "exit") {
  if(command_args[1] == NULL) {
    return (0);
  } else {
    return_value = string_to_integer(command_args[1]);
  }
  free(command_args);
  exit(0);
}

    if ((pid = fork()) == -1) { /* handles error from forking */
      perror ("fork");
      return (1);
    }
    if (pid == 0) { /* child process starts execution; fork() returns value 0 to child process */
      path = get_path(env, command_args[0]); /* Stores path to executable returned by get_path */
        if (path == NULL) {
          write(1, "Command not found", 17);
          print_char('\n');
          return (1);
        }
      execve(path, command_args, env);
    }
    else { /* fork() returns PID of created child to parent process; when child terminates, parent process continues its execution */
      wait(&status); /* waits for child to terminate before displaying prompt & read_line again */
     /*
      * FREE LINE (malloced array) AND ARGUMENTS
      */
      free(command_line);
      free(command_args);
    }
  } while (1);
return(0);
}
