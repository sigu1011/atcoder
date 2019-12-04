#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> grid;
vector<vector<bool>> seen;
bool can_goal = false;

void dfs(pair<int, int> position, int &H, int &W, int dx = 0, int dy = 0) {
  int x = position.first + dx;
  int y = position.second + dy;
  if (y < 0 || H <= y) return;
  if (x < 0 || W <= x) return;
  if (seen.at(y).at(x)) return;
  if (grid.at(y).at(x) == '#') {
    seen.at(y).at(x) = true;
    return;
  }

  seen.at(y).at(x) = true;
  if (grid.at(y).at(x) == 'g') {
    can_goal = true;
    return;
  }
  dfs(make_pair(x, y), H, W, 1, 0);
  dfs(make_pair(x, y), H, W, -1, 0);
  dfs(make_pair(x, y), H, W, 0, 1);
  dfs(make_pair(x, y), H, W, 0, -1);
}

int main() {
  int H, W;
  scanf("%d%d", &H, &W);

  grid.resize(H);
  seen.resize(H);
  for (int i = 0; i < H; i++) {
    grid.at(i).resize(W);
    seen.at(i).resize(W);
  }

  pair<int, int> start;
  for (int y = 0; y < H; y++) {
    for (int x = 0; x < W; x++) {
      char c;
      cin >> c;
      if (c == 's') start = make_pair(x, y);
      grid.at(y).at(x) = c;
    }
  }

  dfs(start, H, W);

  if (can_goal) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
