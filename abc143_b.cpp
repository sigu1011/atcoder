#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> d(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &d.at(i));
  }

  int ans = 0;
  for (int x = 0; x < N; x++) {
    for (int y = x + 1; y < N; y++) {
      ans += d.at(x) * d.at(y);
    }
  }

  printf("%d", ans);
  return 0;
}
