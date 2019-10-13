#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int ans = 0;
  for (auto c : S) {
    if (c == '+') {
      ans++;
    } else if (c == '-') {
      ans--;
    }
  }

  printf("%d", ans);
  return 0;
}
