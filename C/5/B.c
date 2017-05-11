#include <stdio.h>

int main(){
  int i,m,n,k,p,a,b;
  int matrix[1000000];
  scanf("%d", &i);
  scanf("%d", &m);
  scanf("%d", &n);
  for (k = 0; k < m*n; k++) {
    scanf("%d", &p);
    matrix[k] = p*i;
  }
  printf("\n");
  for (a = 0; a < n; a++) {
    for (b = 0; b < m; b++) {
      printf("%i ", matrix[a*b]);
    }
    printf("\n");
  }
  return 0;
}
