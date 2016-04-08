int advanced_search(int *array, int size, int (*check_func)(int))
{
  int i;
  for(i = 0; i < size; i++) {
    if((*check_func)(array[i]) == 1) /* If integer in the array is found (equals True), return 1  */
	return 1;
      }
  return -1;
}
