#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);

  if (B / A >= C) {
    printf("%d", C);
  } else {
    printf("%d", B / A);
  }
  return 0;
}
