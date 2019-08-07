#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);

  for (int i = 1; i <= B; i++) {
    if (A * i % B == C) {
      printf("YES");
      return 0;
    }
  }

  printf("NO");
  return 0;
}
