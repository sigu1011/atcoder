#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  int ans = 1;
  for (int i = 0; i < N; i++) {
    if (ans <= K) {
      ans *= 2;
    } else {
      ans += K;
    }
  }

  printf("%d", ans);
  return 0;
}
