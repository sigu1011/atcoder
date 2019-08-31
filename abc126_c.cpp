#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  double ans = 0;
  for (int i = 1; i <= N; i++) {
    // 現在の得点が既にK以上の場合、勝つ確率を計算し加える
    if (i >= K) {
      ans += (double)(1.0 / (double)N);
      continue;
    }

    int num_coin_wins = 0;
    for (int j = i; j <= K - 1; j *= 2) {
      num_coin_wins++;
    }
    // コインの振る回数を考慮し、勝つ確率を計算し加える
    ans += ((double)(1.0 / (double)N)) *
           ((double)(1.0 / (double)pow(2, num_coin_wins)));
  }

  printf("%.12f", ans);
  return 0;
}
