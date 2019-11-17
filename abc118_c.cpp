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

  int ans = gcd(A.at(0), A.at(1));
  for (int i = 1; i < N - 1; i++) {
    ans = gcd(ans, gcd(A.at(i), A.at(i + 1)));
  }

  printf("%d", ans);
  return 0;
}
