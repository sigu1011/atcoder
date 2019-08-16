#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
  if (a < b) swap(a, b);

  ll r = a % b;
  while (r != 0) {
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

ll lcm(ll a, ll b) {
  if (a < b) swap(a, b);

  return a * b / gcd(a, b);
}

int main() {
  ll A, B, C, D;
  scanf("%lld%lld%lld%lld", &A, &B, &C, &D);

  ll LCM = lcm(C, D);
  // CでもDでも割ることができる集合
  ll q = 0;

  ll u = B - A + 1;
  q += ((B / C) + (B / D) - (B / LCM));
  q -= (((A - 1) / C) + ((A - 1) / D) - ((A - 1) / LCM));

  // 全体集合[A, B]とqの差集合が解答
  printf("%lld", u - q);
  return 0;
}
