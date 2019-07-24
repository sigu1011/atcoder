#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> grid(3, vector<int>(3, 0));

  for (int i = 0; i < 3; i++) {
    int c1, c2, c3;
    scanf("%d%d%d", &c1, &c2, &c3);
    grid.at(i).at(0) = c1;
    grid.at(i).at(1) = c2;
    grid.at(i).at(2) = c3;
  }

  set<int> a2_diff;
  set<int> a3_diff;
  for (int x = 0; x < 3; x++) {
    a2_diff.insert(grid.at(x).at(1) - grid.at(x).at(0));
    a3_diff.insert(grid.at(x).at(2) - grid.at(x).at(0));
  }

  set<int> b2_diff;
  set<int> b3_diff;
  for (int y = 0; y < 3; y++) {
    b2_diff.insert(grid.at(1).at(y) - grid.at(0).at(y));
    b3_diff.insert(grid.at(2).at(y) - grid.at(0).at(y));
  }

  if (a2_diff.size() == 1 && a3_diff.size() == 1 && b2_diff.size() == 1 &&
      b3_diff.size() == 1)
    printf("Yes");
  else
    printf("No");
  return 0;
}
