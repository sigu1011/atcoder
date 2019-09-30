#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int x[110] = {0};
  int y[110] = {0};
  int h[110] = {0};
  int p = 0;
  for (int i = 0; i < N; i++) {
    scanf("%d%d%d", &x[i], &y[i], &h[i]);
    if (h[i] > 0) p = i;
  }

  int ans[3] = {0};
  for (int cx = 0; cx <= 100; cx++) {
    for (int cy = 0; cy <= 100; cy++) {
      bool is_center = true;
      int gh = abs(x[p] - cx) + abs(y[p] - cy) + h[p];
      for (int i = 0; i < N; i++) {
        if (max(gh - abs(x[i] - cx) - abs(y[i] - cy), 0) != h[i]) {
          is_center = false;
          break;
        }
      }
      if (is_center) {
        ans[0] = cx;
        ans[1] = cy;
        ans[2] = gh;
      }
    }
  }

  printf("%d %d %d", ans[0], ans[1], ans[2]);
  return 0;
}
