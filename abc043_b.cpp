#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans = "";
  for (auto c : s) {
    if (c == 'B') {
      if (!ans.empty()) ans.erase(ans.end() - 1);
    } else {
      ans += c;
    }
  }
  printf("%s", ans.c_str());
  return 0;
}
