#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll get_digit(ll &num) { return to_string(num).length(); }

bool cannot_buy(ll &A, ll &B, ll &N, ll &X) {
  return A * N + B * get_digit(N) > X;
}

ll binary_search(ll &A, ll &B, ll &X) {
  ll left = 0;
  ll right = 1e9 + 1;

  while (right - left > 1) {
    ll mid = left + (right - left) / 2;
    if (cannot_buy(A, B, mid, X))
      right = mid;
    else
      left = mid;
  }
  return left;
}

int main() {
  ll A, B, X;
  scanf("%lld%lld%lld", &A, &B, &X);
  printf("%lld", binary_search(A, B, X));
  return 0;
}
