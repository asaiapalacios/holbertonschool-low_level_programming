#include <stdio.h>

int main()
{
  int i, j, n;
/*Change scanf and printf*/
  scanf("%d", &n); 

  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      if(i==j) {
        printf("\\");
      }
      if(j==(n-i-1)) {
        printf("/");
      }
      else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}
