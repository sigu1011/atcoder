#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int N, M;
// DPテーブル、0-N段までのDP値を管理する
// 数え上げのため、初期値は0
long long dp[100100] = {0LL};
// 何段目が壊れているかを管理する配列
bool is_broken[100100] = {false};

// DPテーブルを更新し、N段までの移動方法の総数を数え上げる再帰関数
int rec(int i) {
  // 足場が壊れている場合、その段には遷移できないため、0を返す
  if (is_broken[i] == true) return 0;
  // DPテーブルに値が入っている場合は、探索済みなのでその値を返す
  if (dp[i] > 0) return dp[i];
  // 足場0は初期値1を返す
  if (i == 0) return dp[0] = 1LL;

  // その足場にたどり着く移動方法の総数
  // i-1, i-2 の緩和
  dp[i] += rec(i - 1);
  if (i > 1) dp[i] += rec(i - 2);
  // DPテーブルを更新しながら、値を返す
  return dp[i] %= MOD;
}

int main() {
  scanf("%d%d", &N, &M);
  for (int i = 0; i < M; i++) {
    int a = 0;
    scanf("%d", &a);
    is_broken[a] = true;
  }
  // 出力
  cout << rec(N) << endl;
}
