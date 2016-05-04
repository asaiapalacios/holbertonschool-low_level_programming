void swap_int(int *a, int *b)
/* Write a function that swaps the values of two integers */
{
  int temp; 

  temp = *a; /* Create temporary variable temp to store *a */
  *a = *b;
  *b = temp; /* Send temp value (98) to *b */
}
