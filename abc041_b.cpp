#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {
  long long A, B, C;
  cin >> A >> B >> C;
  printf("%lld", (A % MOD) * (B % MOD) % MOD * (C % MOD) % MOD);
  return 0;
}
