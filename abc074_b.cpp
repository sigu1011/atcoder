#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  vector<int> x(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &x.at(i));
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    ans += min(2 * x.at(i), 2 * abs(K - x.at(i)));
  }

  printf("%d", ans);
  return 0;
}
