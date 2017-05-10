#include <stdio.h>

int main() {
  int a; double b, s;
  scanf("%i\n", &a);
  scanf("%lf", &b);
  s =a * b;

  printf("%d\n", (int)s);
  printf("%e\n", s);
  printf("%f\n", s);
  return 0;
}
