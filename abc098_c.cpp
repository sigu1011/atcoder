#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  vector<int> num_w(N + 1, 0);
  vector<int> num_e(N + 1, 0);
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'W') {
      num_w[i + 1] = num_w[i] + 1;
      num_e[i + 1] = num_e[i];
    } else {
      num_e[i + 1] = num_e[i] + 1;
      num_w[i + 1] = num_w[i];
    }
  }

  int ans = 300000;
  for (int i = 0; i < N; i++) {
    int count = 0;

    count += num_w[i] - num_w[0];
    count += num_e[N] - num_e[i + 1];

    ans = min(ans, count);
  }

  printf("%d", ans);
  return 0;
}
