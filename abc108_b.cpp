#include <bits/stdc++.h>
using namespace std;

int main() {
  int x1, y1, x2, y2;
  scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

  int dx = x2 - x1;
  int dy = y2 - y1;

  printf("%d %d %d %d", x2 - dy, y2 + dx, x1 - dy, y1 + dx);
  return 0;
}
