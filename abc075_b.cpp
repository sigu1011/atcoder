#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  scanf("%d%d", &H, &W);

  string grid[50];
  for (int i = 0; i < H; i++) {
    cin >> grid[i];
  }
  // 8方向探索時のx, yの変化量を定義しておく
  const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
  const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (grid[i][j] == '#') {
        continue;
      }

      int num = 0;
      for (int d = 0; d < 8; d++) {
        const int next_i = i + dy[d];
        const int next_j = j + dx[d];
        // ボード外は探索しない
        if (next_i < 0 or H <= next_i) continue;
        if (next_j < 0 or W <= next_j) continue;
        if (grid[next_i][next_j] == '#') num++;
      }
      grid[i][j] = char(num + '0');
    }
  }

  for (int i = 0; i < H; i++) {
    cout << grid[i] << endl;
  }

  return 0;
}
