#include "my_functions.h"
#include "libshell.h"
#include <stddef.h>

char *get_path(char **env , char *cmd)
{
  char **paths;
  char *path;
  int i;
  char *concat_path;
  for (i = 0; env[i]!= '\0'; i++) /* loops for a string containing PATH */
  { /* separate = and : from path directories */
    if(str_ncomp(env[i], "PATH=", str_len("PATH=")) == 0)
      {
        paths = string_split(env[i],'=');
        path = paths[1];
        paths = string_split(path, ':');
        break; /* get the path */
      }
  }
  for(i = 0; paths[i] != '\0'; i++)
   { /* append command with its directory path */
     concat_path = string_concat(paths[i],"/");
     path = string_concat(concat_path, cmd);
     if(find_ex(path)) /* if path to program to be executed is found */
        return path;
     path = '\0';
   }
   return NULL; /* if no path found */
}
