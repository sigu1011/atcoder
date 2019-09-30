#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  scanf("%d%d", &N, &T);

  int ans = INT32_MAX;
  for (int i = 0; i < N; i++) {
    int c, t;
    scanf("%d%d", &c, &t);
    if (t <= T) {
      ans = min(ans, c);
    }
  }

  if (ans == INT32_MAX) {
    printf("TLE");
  } else {
    printf("%d", ans);
  }
  return 0;
}
