#include <bits/stdc++.h>
using namespace std;

template <class T>
inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}
template <class T>
inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

const long long INF = 1LL << 60;
long long h[100010];
long long dp[100010];

int main() {
  int N, K;
  scanf("%d%d", &N, &K);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &h[i]);
  }

  for (int i = 0; i < N; i++) {
    dp[i] = INF;
  }

  dp[0] = 0;
  for (int i = 1; i < N; i++) {
    for (int j = 1; j <= K; j++) {
      if (i - j < 0) break;
      chmin(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
    }
  }

  printf("%lld", dp[N - 1]);
}
