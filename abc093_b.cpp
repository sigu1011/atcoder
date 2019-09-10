#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, K;
  scanf("%d%d%d", &A, &B, &K);

  if (B - A + 1 <= 2 * K) {
    for (int i = 0; i < B - A + 1; i++) {
      printf("%d\n", A + i);
    }
    return 0;
  }

  for (int i = 0; i < K; i++) {
    printf("%d\n", A + i);
  }
  B = B - K + 1;
  for (int i = 0; i < K; i++) {
    printf("%d\n", B + i);
  }
  return 0;
}
