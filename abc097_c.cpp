#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int K;
  scanf("%d", &K);

  vector<string> ans;
  for (int i = 0; i < s.length(); i++) {
    for (int j = 1; j <= min((int)s.length() - i, K); j++) {
      ans.push_back(s.substr(i, j));
    }
  }

  sort(ans.begin(), ans.end());
  ans.erase(unique(ans.begin(), ans.end()), ans.end());

  printf("%s", ans.at(K - 1).c_str());
  return 0;
}
