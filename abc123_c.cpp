#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, A, B, C, D, E;
  scanf("%lld%lld%lld%lld%lld%lld", &N, &A, &B, &C, &D, &E);
  long long X = min({A, B, C, D, E});
  long long ans = (N + (X - 1)) / X + 4;
  printf("%lld", ans);
  return 0;
}
