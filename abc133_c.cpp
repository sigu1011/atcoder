#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll L, R;
  scanf("%lld%lld", &L, &R);

  ll MOD = 2019;

  ll ans = MOD;
  // ループの終了条件に ans > 0 を追加し、不要な計算を打ち切る
  for (ll i = L; i < R && ans > 0; i++) {
    for (ll j = i + 1; j <= R && ans > 0; j++) {
      ans = min((i * j) % MOD, ans);
    }
  }

  printf("%lld", ans);
  return 0;
}
