#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N;
  scanf("%lld", &N);

  int ans = 10000;
  for (long long i = 1LL; i <= sqrt(N); i++) {
    if (N % i != 0) continue;
    long long A = i;
    long long B = N / A;
    int A_digit = 0;
    int B_digit = 0;
    while (A > 0) {
      A_digit++;
      A /= 10;
    }
    while (B > 0) {
      B_digit++;
      B /= 10;
    }
    int cur = max(A_digit, B_digit);
    if (ans > cur) ans = cur;
  }
  printf("%d", ans);
}
