#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, A;
  cin >> H >> A;
  int ans = 0;
  while (H > 0) {
    H -= A;
    ans++;
  }
  printf("%d", ans);
  return 0;
}
