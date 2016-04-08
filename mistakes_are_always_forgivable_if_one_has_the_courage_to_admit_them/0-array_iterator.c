void array_iterator(int *array, int size, void (*action_func)(int))
{
  int i;
  for(i = 0; i < size; i++) {
    (*action_func)(array[i]); /* function action (with printf elements-of-array statement) passed to &action which is passing this info to *action_func */
    }
}










