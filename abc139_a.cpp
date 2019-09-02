#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  string T;
  cin >> T;

  int ans = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == T.at(i)) ans++;
  }

  printf("%d", ans);
  return 0;
}
