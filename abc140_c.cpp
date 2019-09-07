#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int N;
  scanf("%d", &N);

  vector<ll> B(N - 1, 0);
  for (int i = 0; i < N - 1; i++) {
    scanf("%lld", &B.at(i));
  }

  vector<ll> A(N, 0);
  A.at(0) = B.at(0);
  for (int i = 1; i < N - 1; i++) {
    A.at(i) = min(B.at(i - 1), B.at(i));
  }
  A.at(N - 1) = B.at(N - 2);

  ll ans = 0;
  for (int i = 0; i < N; i++) {
    ans += A.at(i);
  }

  printf("%lld", ans);
  return 0;
}
