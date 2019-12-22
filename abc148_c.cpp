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
  ll A, B;
  scanf("%lld%lld", &A, &B);
  ll ans = lcm(A, B);
  printf("%lld", ans);
  return 0;
}
