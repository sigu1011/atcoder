#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);
  vector<ll> H(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &H.at(i));
  }

  sort(H.begin(), H.end(), greater<ll>());

  ll ans = 0LL;
  for (int i = K - 1; i < N; i++) {
    ans += H.at(i);
  }

  printf("%lld", ans);
  return 0;
}
