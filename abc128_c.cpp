#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  scanf("%d%d", &N, &M);

  vector<vector<int>> s(M);
  for (int i = 0; i < M; ++i) {
    int k = 0;
    scanf("%d", &k);
    s[i].resize(k);
    for (int j = 0; j < k; ++j) {
      scanf("%d", &s.at(i).at(j));
      --s.at(i).at(j);
    }
  }

  vector<int> p(M, 0);
  for (int i = 0; i < M; ++i) {
    scanf("%d", &p.at(i));
  }

  int ans = 0;
  // 全てのスイッチの状態をビット列とみなしてシミュレートする
  for (int bit = 0; bit < (1 << N); ++bit) {
    bool is_all_on = true;

    for (int j = 0; j < M; ++j) {
      int connect_count = 0;

      for (int BIT_FLAG_CONNECT : s[j]) {
        // 電球繋がっているスイッチが何個ONになっているか
        if ((bit >> BIT_FLAG_CONNECT) & 1) {
          ++connect_count;
        }
      }
      // 2の剰余をとり、1つでも点灯する条件が満たされていなければ、
      // そのビット列(スイッチの状態)では全ての電球を点灯できない
      if (connect_count % 2 != p[j]) {
        is_all_on = false;
      }
    }

    if (is_all_on) {
      // 全ての電球の点灯条件をシミュレートし、点灯可能であれば解である
      ++ans;
    }
  }

  printf("%d", ans);
  return 0;
}
