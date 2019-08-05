#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  scanf("%d%d%d%d", &A, &B, &C, &D);

  const int lower = max(A, C);
  const int upper = min(B, D);

  printf("%d", max(0, upper - lower));
  return 0;
}
