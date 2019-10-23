#include <bits/stdc++.h>
using namespace std;

int dp[100010];

int main() {
  int N;
  scanf("%d", &N);

  // 初期化
  for (int i = 1; i <= 100000; i++) {
    dp[i] = 100000;
  }

  // dp[0]の初期値は0
  dp[0] = 0;
  for (int n = 1; n <= 100000; n++) {
    int power = 1;
    while (power <= N) {
      if (n - power >= 0) dp[n] = min(dp[n], dp[n - power] + 1);
      power *= 6;
    }
    power = 1;
    while (power <= N) {
      if (n - power >= 0) dp[n] = min(dp[n], dp[n - power] + 1);
      power *= 9;
    }
  }

  printf("%d", dp[N]);
  return 0;
}
