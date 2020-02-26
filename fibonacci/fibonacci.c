#include <stdio.h>

int main() {
  int first, second, numOfTerm, i, sum=0;

  printf("Enter total number of terms: ");
  scanf("%d", &numOfTerm);

  printf("\nEnter first number: ");
  scanf("%d", &first);

  printf("\nEnter second number: ");
  scanf("%d", &second);

  printf("\n fibonacci series %d %d", first, second);

  for (i = 0; i < numOfTerm; i++) {
    sum = first + second;
    printf(" %d", sum);
    first = second;
    second = sum;
  }
}