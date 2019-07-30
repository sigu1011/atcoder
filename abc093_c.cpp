#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);

  int M = max(max(A, B), C);

  int ans = 0;
  if ((3 * M - A - B - C) % 2 == 0) {
    ans = (3 * M - A - B - C) / 2;
  } else {
    ans = (3 * (M + 1) - A - B - C) / 2;
  }

  printf("%d", ans);
}
