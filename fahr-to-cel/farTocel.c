#include <stdio.h>

int main() {
  int fahr;
  int cel;
  int upper=300;

  printf("Fahr\t Cel\n\n");

  for(fahr=0; fahr<=upper; fahr+=20) {
    cel = 5 * (fahr - 32) / 9;
    printf("%d\t %d\n", fahr, cel);
  }

  return 0;
}