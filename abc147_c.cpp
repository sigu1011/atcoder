#include <bits/stdc++.h>
using namespace std;

int A[20];
int x[20][20];
int y[20][20];
int ans = 0;

void update(string str, int n) {
  // ビット列に変換
  bitset<15> bits(str, 0, n, 'F', 'T');

  bool is_consistent = true;
  for (int i = 0; i < n; i++)
    if (bits.test(i)) {
      // 生成したビット列と各正直者の証言が整合しているか確認
      for (int j = 0; j < A[i]; j++) {
        if ((bits.test(x[i][j] - 1)) ^ y[i][j]) is_consistent = false;
      }
    }

  if (is_consistent) ans = max(ans, (int)bits.count());
}

void dfs(string cur, int n, int depth) {
  if (depth == n) {
    update(cur, n);
    return;
  }
  dfs("T" + cur, n, depth + 1);
  dfs("F" + cur, n, depth + 1);
}

int main() {
  int N;
  scanf("%d", &N);

  for (int i = 0; i < N; ++i) {
    scanf("%d", &A[i]);
    for (int j = 0; j < A[i]; ++j) {
      scanf("%d%d", &x[i][j], &y[i][j]);
    }
  }

  string start;
  dfs(start, N, 0);

  cout << ans << endl;
}
