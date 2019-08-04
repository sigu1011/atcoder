#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  scanf("%d%d%d%d", &A, &B, &C, &D);

  if (B <= C || A >= D) {
    printf("0");
    return 0;
  }
  if (A <= C && D <= B) {
    printf("%d", D - C);
    return 0;
  }
  if (C <= A && B <= D) {
    printf("%d", B - A);
    return 0;
  }

  if (C < A && A < D) {
    printf("%d", D - A);
  } else if (C < B && B < D) {
    printf("%d", B - C);
  } else if (A < C && C < B) {
    printf("%d", B - C);
  } else if (A < D && D < B) {
    printf("%d", B - D);
  }
  return 0;
}
