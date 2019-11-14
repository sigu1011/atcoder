#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
  if (x < y) swap(x, y);
  if (y == 0) return x;
  return gcd(x % y, y);
}

int main() {
  int N;
  scanf("%d", &N);
  vector<int> A(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &A.at(i));
  }

  vector<int> L(N + 1, 0);
  for (int i = 0; i < N; i++) L.at(i + 1) = gcd(L.at(i), A.at(i));
  vector<int> R(N + 1, 0);
  for (int i = N - 1; i >= 0; i--) R.at(i) = gcd(R.at(i + 1), A.at(i));

  int ans = 1;
  for (int i = 0; i < N; i++) {
    ans = max(ans, gcd(L.at(i), R.at(i + 1)));
  }
  printf("%d", ans);
  return 0;
}
