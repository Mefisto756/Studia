#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char tablica[100000];
  int i;

  scanf("%s", tablica);
  for (i = strlen(tablica)-1; i >= 0 ; i--) {
    printf("%c", tablica[i]);
  }
  printf("\n");
  return 0;
}
