#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> V(N, 0);
  vector<int> C(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &V.at(i));
  }
  for (int i = 0; i < N; i++) {
    scanf("%d", &C.at(i));
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (V.at(i) - C.at(i) > 0) ans += V.at(i) - C.at(i);
  }

  printf("%d", ans);
  return 0;
}
