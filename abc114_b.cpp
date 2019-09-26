#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int ans = INT32_MAX;
  for (int i = 0; i < S.size() - 2; i++) {
    int X = stoi(S.substr(i, 3));
    ans = min(ans, abs(X - 753));
  }

  printf("%d", ans);
  return 0;
}
