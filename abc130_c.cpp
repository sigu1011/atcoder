#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, H, x, y;
  scanf("%d%d%d%d", &W, &H, &x, &y);
  // 長方形の中心を通る直線を引けば、分割後の面積が最大となる
  // 与えられた(x. y)が中心である場合、直線は無数に存在する
  printf("%lf %d", (double)W * (double)H / 2, 2 * x == W && 2 * y == H);
  return 0;
}
