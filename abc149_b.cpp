#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  ll A, B, K;
  cin >> A >> B >> K;
  if (A + B < K) {
    cout << 0LL << " " << 0LL << endl;
  } else if (A >= K) {
    cout << A - K << " " << B << endl;
  } else if (A < K) {
    cout << 0LL << " " << B - (K - A) << endl;
  }
  return 0;
}
