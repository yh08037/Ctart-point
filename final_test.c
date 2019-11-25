#include <stdio.h>


int main() {
  int num, width, height;
  int i, j, k, l;

  scanf("%d %d %d", &num, &width, &height);

  for ( l = 0; l < height; l++ ) {
    for ( i = 0; i < num/2+1; i++ ) {
      for ( k = 0; k < width; k++ ) {
        for ( j = 0; j < i; j++ ) {
          printf(" ");
        }
        for ( j = 0; j < num-2*i; j++ ) {
          printf("*");
        }
        for ( j = 0; j < i; j++ ) {
          printf(" ");
        }
        printf("  ");
      }
      printf("\n");
    }

    for ( i = num/2-1; i >= 0; i-- ) {
      for ( k = 0; k < width; k++ ) {
        for ( j = 0; j < i; j++ ) {
          printf(" ");
        }
        for ( j = 0; j < num-2*i; j++ ) {
          printf("*");
        }
        for ( j = 0; j < i; j++ ) {
          printf(" ");
        }
        printf("  ");
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
