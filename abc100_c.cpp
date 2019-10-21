#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  // 各要素が奇数になるまでに何回2で割れるかを数える
  int ans = 0;
  for (int i = 0; i < N; i++) {
    int a = 0;
    scanf("%d", &a);
    if (a % 2 == 0) {
      while (a % 2 == 0) {
        ans++;
        a /= 2;
      }
    }
  }

  printf("%d", ans);
  return 0;
}
