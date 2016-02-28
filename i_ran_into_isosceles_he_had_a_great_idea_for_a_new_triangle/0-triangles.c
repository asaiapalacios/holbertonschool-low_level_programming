/* write a function that prints n triangles of height h */
#include <stdio.h>
void triangles_in_the_term(int h, int n){

int row;
int space;
int star;
int ncopy;
 
for (ncopy=1; ncopy<=n; ncopy++){ /* for loop for n triangles */
  for(row=1; row<=h; row++){ 
    for(space=h-row; space>0; space--){ /* for loop to determine spaces before star */
      printf(" ");
    } 
    for(star=1; star<=row*2-1; star++){ /* for loop to determine starts per row */
      printf("*");
    }
    printf("\n");
  }
 } 
}
