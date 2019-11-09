#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int len = S.length();
  sort(S.begin(), S.end());
  S.erase(unique(S.begin(), S.end()), S.end());

  if (len == S.length())
    printf("yes");
  else
    printf("no");
  return 0;
}
