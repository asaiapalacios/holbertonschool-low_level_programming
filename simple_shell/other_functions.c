/*
 * Function declarations for built-in shell commands
 */
 int env(char **args);
 int exit(char **args);

/*
 * Array of built-in command names
 */
char *builtin_string[] = {
  "env",
  "exit"
};

/*
 * Array of their corresponding functions
 */
int (*builtin_function[]) (char **) = {
  &env,
  &exit
};

/*
 * Component for executing builtins
 */
int builtin_num() {
  return sizeof(builtin_string) / sizeof(char *);
}

/*
 * Builtin function implementation: env & exit
 */
int env(char **args) {
  /* ENV PROGRAM GOES HERE: 1) print all env variables 2) command takes no args */
}
/* Terminates your program; Command syntax: exit [VALUE returned by program] */
int exit(char **args) {
  return 0;
}

/*
 * To compare strings: run string_compare function; works like strcmp
 */
int string_compare(char *s1, const char **s2) {
  int i;

  i = 0;
  while((s1[i] != '\0') && (s1[i] == s2[i])) {
    i++;
  }
  if(s1[i] == s2[i])
    return 0;
  return (s1[i] - s2[i]);
}

/*
 * IMPLEMENT EXECUTE FUNCTION:
 * will either launch a built-in or a process
 */
int execute(char **args) {
  int i;

  if (args[0]) == NULL) { /* check if user entered empty string or whitespace */
      return 1;
  }
/* check if command equals each builtin; if so, run it */
  for (i = 0; i < builtin_num(); i++) {
    if (string_compare(args[0], builtin_string[i]) == 0) {
      return (*builtin_function[i])(args);
    }
  }
  return launch(args); /* if it doesn't match a builtin, launch process instead */
}
