// determine whether two arrays a and b have an element in common
#include <stdio.h>

int isCommon(int a[], int b[], int n, int m) {
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (a[i] == b[j]) {
        return 1;
      }
    }
  }
  return 0;
}

int main() {
  int n = 5;
  int m = 5;
  int p[5] = {10, 20, 30, 40, 50};
  int q[5] = {60, 70, 80, 100, 90};
  int result = isCommon(p, q, n, m);
  if (result == 0) {
    printf("No matching element is found\n");
  } else {
    printf("Maching element is found\n");
  }
  return 0;
}