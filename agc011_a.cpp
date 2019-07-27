#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, C, K;
  scanf("%d%d%d", &N, &C, &K);

  vector<int> T(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> T.at(i);
  }

  sort(T.begin(), T.end());

  int ans = 0;
  int i = 0;
  while (i < N) {
    int passenger = 1;
    for (int j = i + 1; j < N; j++) {
      if (passenger == C) {
        break;
      }
      if (T.at(j) - T.at(i) <= K) {
        passenger++;
      } else {
        break;
      }
    }
    ans++;
    i += passenger;
  }

  printf("%d", ans);
  return 0;
}
