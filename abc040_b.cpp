#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 1e9;
  for (int i = 1; i <= n; i++) {
    int a = i;
    int b = n / i;
    ans = min(ans, abs(a - b) + (n - a * b));
  }
  printf("%d", ans);
  return 0;
}
