#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> H(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &H.at(i));
  }

  int ans = 0;
  int count = 0;
  for (int i = 0; i < N - 1; i++) {
    if (H.at(i) >= H.at(i + 1)) {
      count++;
      ans = max(ans, count);
    } else {
      count = 0;
    }
  }

  printf("%d", ans);
  return 0;
}
