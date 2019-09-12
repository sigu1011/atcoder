#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> a(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &a.at(i));
  }

  sort(a.begin(), a.end());

  int ans = 0;
  for (int i = 0; i < N - 1; i++) {
    ans += a.at(i + 1) - a.at(i);
  }

  printf("%d", ans);
  return 0;
}
