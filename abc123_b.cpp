#include <bits/stdc++.h>
using namespace std;

int maxtime(int x) {
  // 引数を10の倍数に切り上げた値を返す。
  // 引数が10の倍数である場合は、その値を返す。
  return (x + 9) / 10 * 10;
}

int remtime(int x) {
  // 引数を10の倍数に切り上げた値と、引数の差分を返す。
  return maxtime(x) - x;
}

int main() {
  int A, B, C, D, E;
  scanf("%d%d%d%d%d", &A, &B, &C, &D, &E);
  int sum = maxtime(A) + maxtime(B) + maxtime(C) + maxtime(D) + maxtime(E);
  // 最後に注文した場合、最も待機時間が短くなるものを引く
  sum -= max({remtime(A), remtime(B), remtime(C), remtime(D), remtime(E)});
  printf("%d", sum);
  return 0;
}
