#include <stdio.h>

int string_length(char str[]) {
  int i = 0;
  int length = 0;

  while(str[i] !='\0') {
    i++;
    length++;
  }
  return length - 1;
}

int main() {
  char country[100];
  int length;

  while(fgets(country, 100, stdin)) {
    length = string_length(country);
    printf("length: %d\n", length);
  }
  return 0;
}