#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

Graph graph(200100);
vector<int> score(200100, 0);

void dfs(int cur, int prev) {
  score[cur] += score[prev];
  // 各頂点にスコアを加算する
  for (auto next : graph.at(cur)) {
    if (next == prev) continue;
    dfs(next, cur);
  }
}

int main() {
  int N, Q;
  scanf("%d%d", &N, &Q);

  for (int i = 0; i < N - 1; i++) {
    int a, b;
    scanf("%d%d", &a, &b);
    // 辺の情報から無向グラフを作成
    graph.at(a).push_back(b);
    graph.at(b).push_back(a);
  }

  for (int i = 0; i < Q; i++) {
    int p, x;
    scanf("%d%d", &p, &x);
    score.at(p) += x;
  }

  dfs(1, 0);

  for (int i = 1; i <= N; i++) {
    printf("%d ", score.at(i));
  }
  return 0;
}
