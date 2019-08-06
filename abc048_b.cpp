#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b, x;
  scanf("%lld%lld%lld", &a, &b, &x);

  long long ans = 0;
  if (a % x == 0) ans++;

  ans += b / x;
  ans -= a / x;

  printf("%lld", ans);
  return 0;
}
