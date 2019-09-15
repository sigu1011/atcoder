#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int N, M;
  scanf("%d%d", &N, &M);

  vector<pair<ll, ll>> AB(N, make_pair(0, 0));
  for (int i = 0; i < N; i++) {
    ll A, B;
    scanf("%lld%lld", &A, &B);
    AB.at(i) = make_pair(A, B);
  }

  sort(AB.begin(), AB.end());

  ll ans = 0;
  for (int i = 0; i < N; i++) {
    if (M <= 0) break;

    if (AB.at(i).second < M) {
      ans += AB.at(i).first * AB.at(i).second;
      M -= AB.at(i).second;
    } else {
      ans += AB.at(i).first * M;
      M -= M;
    }
  }

  printf("%lld", ans);
  return 0;
}
