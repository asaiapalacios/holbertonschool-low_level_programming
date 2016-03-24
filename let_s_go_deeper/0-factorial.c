/* Write a function that returns the factorial of a given number */
int factorial(int n) {

  if(n == 1) {
    return (1);
  }
  if(n <= 0) {
    return (-1);
  }
  else {
    return (n * factorial(n-1)); /* Statement contains recursion of function */
  }
}
