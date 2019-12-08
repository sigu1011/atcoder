#include <bits/stdc++.h>
using namespace std;

int N, A, B, C;
vector<int> l;
int ans = 1e9;

void dfs(int depth, int a, int b, int c, int merge) {
  if (depth == N) {
    if (a && b && c)
      ans = min(ans, abs(a - A) + abs(b - B) + abs(c - C) + merge * 10);
    return;
  }
  dfs(depth + 1, a, b, c, merge);
  dfs(depth + 1, a + l.at(depth), b, c, merge + bool(a));
  dfs(depth + 1, a, b + l.at(depth), c, merge + bool(b));
  dfs(depth + 1, a, b, c + l.at(depth), merge + bool(c));
}

int main() {
  scanf("%d%d%d%d", &N, &A, &B, &C);
  l.resize(N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &l.at(i));
  }
  dfs(0, 0, 0, 0, 0);
  printf("%d", ans);
  return 0;
}
