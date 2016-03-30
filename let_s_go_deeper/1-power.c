/* Write a function that returns the value of x raised to the power of y */
int power(int x, int y) {

  if (y < 0) { 
    return -1;
  }
  else if (x < 0) {
    return -1;
  }
  else if (y == 0) {
    return 1;
  }
  else if (y == 1) {
    return x * y;
  }
  else {
    return (x * power(x, y-1));
  }
}
