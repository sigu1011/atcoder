#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X, Y;
  scanf("%d%d%d%d", &N, &M, &X, &Y);

  int max_x = -101;
  for (int i = 0; i < N; i++) {
    int x;
    scanf("%d", &x);
    max_x = max(max_x, x);
  }

  int min_y = 101;
  for (int i = 0; i < M; i++) {
    int y;
    scanf("%d", &y);
    min_y = min(min_y, y);
  }

  if (max_x < min_y && X <= max_x && Y >= min_y) {
    printf("No War");
  } else {
    printf("War");
  }
  return 0;
}
