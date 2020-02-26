// write a c program to find the factorial of a given number

#include <stdio.h>

int main()
{
  int i, n, prod = 1;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    prod = prod * i;
  }

  printf("Factorial of %d is %d\n", n, prod);
  return 0;
}