#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int height = 0;
    scanf("%d", &height);
    if (height >= K) ans++;
  }

  printf("%d", ans);
  return 0;
}
