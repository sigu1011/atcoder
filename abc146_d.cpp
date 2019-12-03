#include <bits/stdc++.h>
using namespace std;

struct Edge {
  int to;
  int id;
  Edge(int t, int i) : to(t), id(i) {}
};

using Graph = vector<vector<Edge>>;
vector<int> ans;

void dfs(Graph &g, int v, int pre_color = -1, int parent = -1) {
  int color = 1;
  for (auto next_v : g.at(v)) {
    int u = next_v.to;
    int id = next_v.id;
    if (u == parent) continue;
    if (color == pre_color) color++;
    ans.at(id) = color;
    color++;
    dfs(g, u, ans.at(id), v);
  }
}

int main() {
  int N;
  cin >> N;
  vector<vector<Edge>> graph(N);
  for (int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    graph.at(a).push_back(Edge(b, i));
    graph.at(b).push_back(Edge(a, i));
  }

  ans.resize(N - 1);
  dfs(graph, 0);

  int mx = 0;
  for (int i = 0; i < N; i++) mx = max(mx, (int)graph.at(i).size());
  cout << mx << endl;
  for (int i = 0; i < N - 1; i++) cout << ans.at(i) << endl;
  return 0;
}
