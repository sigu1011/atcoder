#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, H, N;
  scanf("%d%d%d", &W, &H, &N);
  vector<vector<int>> coordinate(H, vector<int>(W, 0));

  for (int num = 0; num < N; num++) {
    int x = 0;
    int y = 0;
    int a = 0;
    scanf("%d%d%d", &x, &y, &a);

    switch (a) {
      case 1:
        for (int i = 0; i < H; i++) {
          for (int j = 0; j < x; j++) {
            coordinate.at(i).at(j)++;
          }
        }
        break;
      case 2:
        for (int i = 0; i < H; i++) {
          for (int j = x; j < W; j++) {
            coordinate.at(i).at(j)++;
          }
        }
        break;
      case 3:
        for (int i = 0; i < y; i++) {
          for (int j = 0; j < W; j++) {
            coordinate.at(i).at(j)++;
          }
        }
        break;
      case 4:
        for (int i = y; i < H; i++) {
          for (int j = 0; j < W; j++) {
            coordinate.at(i).at(j)++;
          }
        }
        break;
      default:
        break;
    }
  }

  int ans = 0;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (coordinate.at(i).at(j) == 0) {
        ans++;
      }
    }
  }

  printf("%d", ans);
}
