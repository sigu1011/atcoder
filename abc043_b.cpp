#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans = "";
  for (int i = 0; i < s.length(); i++) {
    if (s.at(i) == '0') {
      ans.push_back('0');
    } else if (s.at(i) == '1') {
      ans.push_back('1');
    } else {
      if (!ans.empty()) {
        ans.erase(ans.length() - 1);
      }
    }
  }

  printf("%s", ans.c_str());
  return 0;
}
