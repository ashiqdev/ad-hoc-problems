// check given number is palindrome or not

#include <stdio.h>

int main() {
  int reversed = 0;
  int n;
  int originalNumber;
  int remainder;

  printf("Enter a number: ");
  scanf("%d", &n);

  originalNumber = n;

  while(originalNumber != 0) {
    remainder = originalNumber % 10;
    reversed = reversed * 10 + remainder;
    originalNumber /= 10;
  }

  if(reversed == n) {
    printf("%d is palindrome\n", n);
  } else {
    printf("%d is not palindrome\n", n);
  }
}