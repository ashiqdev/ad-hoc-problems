//  write a c program to count the number of digit in an integer

#include <stdio.h>

int main() {
  int n, count = 0;
  printf("Enter a number: ");
  scanf("%d", &n);

  while (n != 0) {
    n = n / 10;
    count++;
  }

  printf("Total number of digit is %d\n", count);
  return 0;
}

// 123 % 10 = 12  (count = 1)
// 12 % 10 = 1 (count = 2)
// 1 % 10 = 0 (count = 3)