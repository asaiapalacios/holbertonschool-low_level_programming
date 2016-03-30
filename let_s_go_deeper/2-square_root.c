int square_root(int n) {

  /* int mid;
     int root; */ 
  
  if (n == 1) {
    return 1;
  }
  else if (n < 0) {
    return -1;
  }
  /* else if (mid * mid == n) {
     root = n;
     return root;
    else 
      return -1;
  } */
  else {
    return (n / square_root(n/2));
  }
}
