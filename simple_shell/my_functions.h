int execute(char **args);
int builtin_num();
int string_compare(char *s1, const char **s2);
char *builtin_string[] = {"env", "exit"}; /* Not sure to include in this file? */
int (*builtin_function[]) (char **) = {&env, &exit}; /* Include in this file? */
int env(char **args); /* Include in this file? */
int exit(char **args); /* Include in this file? */
int launch(char **args);
