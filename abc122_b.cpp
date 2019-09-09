#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  set<char> ATCG{'A', 'T', 'C', 'G'};

  int ans = 0;
  for (int i = 0; i < S.size(); i++) {
    string tmp = "";
    for (int j = i; j < S.size(); j++) {
      if (ATCG.count(S.at(j)) > 0) {
        tmp.push_back(S.at(j));
      } else {
        break;
      }
    }
    int length = tmp.length();
    ans = max(length, ans);
  }

  printf("%d", ans);
  return 0;
}
