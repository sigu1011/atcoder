#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
long long A[300100];

int main() {
  int N;
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    scanf("%lld", &A[i]);
  }

  // 各ビットの1の個数を数え上げる
  long long ones[60] = {0LL};
  for (int i = 0; i < N; i++) {
    for (int bit = 0; bit < 60; bit++) {
      ones[bit] += (A[i] >> bit) & 1;
    }
  }
  // 0の個数と1の個数を利用し、和を求める
  long long ans = 0LL;
  for (int i = 0; i < 60; i++) {
    ans += ((ones[i] * (N - ones[i])) % MOD) * ((1LL << i) % MOD);
    ans %= MOD;
  }

  printf("%lld", ans);
  return 0;
}
