#include <stdio.h>
void triangles_in_the_term(int h, int n){

int row;
int space;
int star;
int ncopy;
 
 for (ncopy=1; ncopy<=n; ncopy++){ /*   */
  for(row=1; row<=h; row++){
    for(space=h-row; space>0; space--){
      printf(" ");
    } 
    for(star=1; star<=row*2-1; star++){
      printf("*");
    }
    printf("\n");
  }
 } 
}
