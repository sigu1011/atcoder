#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  scanf("%d%d", &H, &W);
  int h, w;
  scanf("%d%d", &h, &w);

  printf("%d", H * W - (h * W + (H - h) * w));
  return 0;
}
