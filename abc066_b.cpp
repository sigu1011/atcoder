#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int ans = 0;
  for (int i = 1; i <= (S.size() - 1) / 2; i++) {
    if (S.substr(0, i) == S.substr(i, i)) ans = i * 2;
  }
  printf("%d", ans);
  return 0;
}
