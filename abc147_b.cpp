#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int idx = S.size() / 2;
  int ans = 0;
  for (int i = 0; i < S.size() / 2; i++) {
    if (S.at(i) == S.at(S.size() - 1 - (i + 1))) ans++;
  }

  printf("%d", ans);
  return 0;
}
