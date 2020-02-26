#include <stdio.h>
#include <math.h>

int numOfDigit(int num) {
   int count = 0;

   while(num != 0) {
     num /= 10;
     count++;
   }
   return count;
}

int main() {

  int number, originalNumber, remainder, result = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  int digitCount = numOfDigit(number);

  originalNumber = number;

  while(originalNumber != 0) {
    remainder = originalNumber % 10;
    result += pow(remainder, digitCount);
    originalNumber /= 10;
  }
    if (number == result) {
    printf("%d is armstrong number\n", number);
  } else {
    printf("%d is not armstrong number\n", number);
  }
}