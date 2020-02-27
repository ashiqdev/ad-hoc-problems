#include <stdio.h>

void swap(int *a, int *b) {
  int temp;
  temp = *b;
  *b = *a;
  *a = temp;
}

int main() {
  int a, b, temp;
  printf("Enter the value of a and b: ");
  scanf("%d %d", &a, &b);
  swap(&a, &b);
  printf("After swapping a =%d b=%d\n", a, b);

  return 0;
}