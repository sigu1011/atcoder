#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  vector<int> x(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &x.at(i));
  }

  ll ans = 1e9;
  for (int i = 0; i <= N - K; i++) {
    ll left = x.at(i);
    ll right = x.at(i + K - 1);
    ll movement = min(abs(left) + right - left, abs(right) - left + right);
    ans = min(ans, movement);
  }

  printf("%lld", ans);
  return 0;
}
