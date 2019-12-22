#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S, T;
  cin >> S >> T;

  string ans;
  for (int i = 0; i < N; i++) {
    ans.push_back(S.at(i));
    ans.push_back(T.at(i));
  }

  printf("%s", ans.c_str());
  return 0;
}
