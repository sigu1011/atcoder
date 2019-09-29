#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int h[110] = {0};
  for (int i = 0; i < N; i++) {
    scanf("%d", &h[i]);
  }

  int ans = 0;
  while (1) {
    int begin = -1;
    int end = 0;
    int height = 101;

    for (int i = 0; i < N; i++) {
      if (h[i] > 0) {
        begin = i;
        height = min(height, h[i]);
        break;
      }
    }

    if (begin == -1) break;

    for (int j = begin; j < N; j++) {
      if (h[j] == 0) {
        end = j;
        break;
      }
      height = min(height, h[j]);
      end = j + 1;
    }

    for (int i = begin; i < end; i++) {
      h[i] -= height;
    }

    ans += height;
  }

  printf("%d", ans);
  return 0;
}
