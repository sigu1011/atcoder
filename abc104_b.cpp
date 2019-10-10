#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int L = S.size();
  string ans = "AC";
  if (S.front() != 'A') {
    ans = "WA";
  }
  int cnt = 0;
  for (int i = 1; i < L; ++i) {
    if (isupper(S.at(i))) {
      if (i == 1 || i == L - 1 || S.at(i) != 'C') {
        ans = "WA";
      }
      cnt++;
    }
  }
  if (cnt != 1) {
    ans = "WA";
  }

  printf("%s", ans.c_str());
  return 0;
}
