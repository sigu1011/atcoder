#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, M;
  cin >> N >> M;
  if (N == 1 && M == 1) {
    printf("1");
  } else if (N == 1 || M == 1) {
    printf("%lld", N * M - 2);
  } else {
    printf("%lld", (N - 2) * (M - 2));
  }
  return 0;
}
