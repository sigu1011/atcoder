#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  string S1(S.size(), '0');
  string S2(S.size(), '1');
  for (int i = 1; i < S.size(); i += 2) {
    S1.at(i) += 1;
    S2.at(i) -= 1;
  }

  int ans = 0;
  int ans1 = 0;
  int ans2 = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) != S1.at(i)) {
      ans1++;
    }
    if (S.at(i) != S2.at(i)) {
      ans2++;
    }
  }
  ans = min(ans1, ans2);

  printf("%d", ans);
  return 0;
}
