// write a c program to find the factorial of a given number

#include <stdio.h>

int main() {
  int i, n;
  unsigned long long prod = 1;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("factorial of negative number does not exist\n");
  } else {
    for (i = 2; i <= n; i++) {
      prod = prod * i;
    }
    printf("Factorial of %d is %d\n", n, prod);
  }

  return 0;
}