#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> s(N + 1, 0);
  for (int i = 0; i < N; i++) {
    int W = 0;
    scanf("%d", &W);
    s.at(i + 1) = s.at(i) + W;
  }

  int ans = INT32_MAX;
  for (int T = 1; T < N; T++) {
    int S1 = s.at(T) - s.at(0);
    int S2 = s.at(N) - s.at(T);
    if (abs(S1 - S2) < ans) {
      ans = abs(S1 - S2);
    }
  }

  printf("%d", ans);
  return 0;
}
