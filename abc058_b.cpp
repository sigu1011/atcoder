#include <bits/stdc++.h>
using namespace std;

int main() {
  string O, E;
  cin >> O >> E;

  string ans;
  for (int i = 0; i < O.length() + E.length(); i++) {
    if (i % 2 == 0) {
      ans.push_back(O.at(i / 2));
    } else {
      ans.push_back(E.at(i / 2));
    }
  }

  printf("%s", ans.c_str());
  return 0;
}
