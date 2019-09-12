#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, K;
  scanf("%d%d%d%d", &A, &B, &C, &K);
  printf("%d", A + B + C + max(C, max(A, B)) * ((1 << K) - 1));
  return 0;
}
