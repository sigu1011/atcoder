#include <bits/stdc++.h>
using namespace std;

int main() {
  long long X, Y;
  scanf("%lld%lld", &X, &Y);

  long long ans = 0;
  while (X <= Y) {
    X *= 2;
    ans++;
  }

  printf("%lld", ans);
  return 0;
}
