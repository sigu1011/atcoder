#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  scanf("%d%d", &H, &W);

  vector<vector<char>> grid(H + 2, vector<char>(W + 2, '0'));
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      char s;
      cin >> s;
      grid.at(i).at(j) = s;
    }
  }

  int count = 0;
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      if (grid.at(i).at(j) == '#') {
        if (grid.at(i).at(j - 1) == '#') count++;
        if (grid.at(i).at(j + 1) == '#') count++;
        if (grid.at(i - 1).at(j) == '#') count++;
        if (grid.at(i + 1).at(j) == '#') count++;

        if (count == 0) {
          printf("No");
          return 0;
        } else {
          count = 0;
        }
      }
    }
  }

  printf("Yes");
  return 0;
}
