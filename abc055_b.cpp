#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main() {
  int N;
  scanf("%d", &N);

  long long ans = 1;
  for (int i = 1; i <= N; i++) {
    ans *= i;
    ans %= MOD;
  }
  printf("%lld", ans);
}
