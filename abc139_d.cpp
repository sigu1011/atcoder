#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll N;
  scanf("%lld", &N);

  ll ans = 0;
  if (N > 1) {
    ans = (1 + N) * N / 2;
    ans -= N;
  }

  printf("%lld", ans);
  return 0;
}
