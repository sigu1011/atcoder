#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  vector<int> h(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &h.at(i));
  }

  sort(h.begin(), h.end());

  int ans = 1e9;
  for (int i = 0; i <= N - K; i++) {
    ans = min(ans, (h.at(i + K - 1) - h.at(i)));
  }

  printf("%d", ans);
  return 0;
}
