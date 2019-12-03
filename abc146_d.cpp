#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> graph(N);
  vector<pair<int, int>> vp;
  for (int i = 1; i < N; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    graph.at(a).push_back(b);
    graph.at(b).push_back(a);
    vp.emplace_back(a, b);
  }

  // 各エッジの色
  map<pair<int, int>, int> edges_color;
  // 親を持つ場合、親に割り当てられた色
  vector<int> assigned_color(N, 0);

  vector<int> seen(N, 0);
  queue<int> que;

  seen.at(0) = 1;
  que.push(0);
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    int cur = 1;
    for (auto u : graph.at(v)) {
      // 探索済みの頂点はスルー
      if (seen.at(u)) continue;
      // 親となる頂点に割り当てられた色は使用しない
      if (cur == assigned_color.at(v)) cur++;
      // 割り当てる色で無向グラフの辺の色を更新
      assigned_color.at(u) = cur;
      edges_color[make_pair(u, v)] = cur;
      edges_color[make_pair(v, u)] = cur;
      cur++;
      seen.at(u) = 1;
      que.push(u);
    }
  }

  int K = 0;
  for (int i = 0; i < N; i++) K = max(K, (int)graph.at(i).size());
  cout << K << endl;
  for (auto p : vp) cout << edges_color[p] << endl;
  return 0;
}
