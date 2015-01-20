#include <stdio.h>

int main(void) {

  int X, Z, R, i;
  X = Z = R = 0;
  
  scanf("%d", &X);
  while( (scanf("%d", &Z)) && (Z <= X) );

  // R = X;

  for(i = 0; R <= Z; i++) {
    // X = X + 1;
    // R = R + X;
    R += X++;
  }


  printf("%d\n", i);

  return 0;
}
