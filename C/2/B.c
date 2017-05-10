#include <stdio.h>

int main() {
  int n,i,j,h,l,b;
  scanf("%d", &n);
  h=1; b=n-1;
  for (i = 0; i < n; i++) {
    for (l = 0; l < b; l++) {
      printf(" ");
    }
    for (j=0; j < h; j++) {
      printf("*");
    }
    printf("\n");
    h=h+2;
    b=b-1;
  }
  b=n-1;
  for (l = 0; l < b; l++) {
    printf(" ");
  }
  printf("#\n");
  return 0;
}
