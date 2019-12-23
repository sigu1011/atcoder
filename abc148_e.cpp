#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll g1(ll n, int p) {
  if (n == 0) return 0;
  return n / p + g1(n / p, p);
}

ll g2(ll N, int p) {
  if (N % 2 == 1) {
    return g1(N, p) - g2(N - 1, p);
  }
  ll res = g1(N / 2, p);
  if (p == 2) res += N / 2;
  return res;
}

int main() {
  ll N;
  scanf("%lld", &N);
  ll ans = min(g2(N, 2), g2(N, 5));
  printf("%lld", ans);
  return 0;
}
