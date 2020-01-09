#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, M;
  cin >> N >> M;
  if (N == 1LL && M == 1LL) {
    printf("1");
  } else if (N == 1LL || M == 1LL) {
    printf("%lld", N * M - 2LL);
  } else {
    printf("%lld", N * M - 2LL * (N + M - 2LL));
  }
  return 0;
}
