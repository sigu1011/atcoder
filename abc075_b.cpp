#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  scanf("%d%d", &H, &W);
  vector<vector<char>> grid(H + 2, vector<char>(W + 2, '0'));
  for (int i = 0; i < H + 2; i++) {
    for (int j = 0; j < W + 2; j++) {
      if (i == 0 || i == H + 1 || j == 0 || j == W + 1) grid.at(i).at(j) = 'w';
    }
  }

  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      char input;
      cin >> input;

      if (input == '#') {
        for (int y = i - 1; y <= i + 1; y++) {
          for (int x = j - 1; x <= j + 1; x++) {
            if (grid.at(y).at(x) == '#') {
              continue;
            }

            if (y == i && x == j) {
              grid.at(y).at(x) = '#';
            } else if (grid.at(y).at(x) == 'w') {
              continue;
            } else {
              grid.at(y).at(x)++;
            }
          }
        }
      }
    }
  }

  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      cout << grid.at(i).at(j);
    }
    cout << endl;
  }

  return 0;
}
