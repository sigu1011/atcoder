#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) { return y ? gcd(y, x % y) : x; }

int main() {
  int N, X;
  scanf("%d%d", &N, &X);

  vector<int> D(N, 0);
  for (int i = 0; i < N; i++) {
    int x = 0;
    scanf("%d", &x);
    D.at(i) = abs(X - x);
  }

  int ans = D.at(0);
  for (int i = 1; i < N; i++) {
    ans = min(gcd(D.at(i), ans), ans);
  }

  printf("%d", ans);
  return 0;
}
