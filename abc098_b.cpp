#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  string S;
  cin >> S;

  int ans = 0;
  for (int i = 1; i < N; i++) {
    int count = 0;
    string X = S.substr(0, i);
    string Y = S.substr(i, N - i);

    set<char> X_set, Y_set;
    for (char c : X) X_set.insert(c);
    for (char c : Y) Y_set.insert(c);

    for (char x : X_set) {
      if (Y_set.count(x) > 0) count++;
    }

    ans = max(ans, count);
  }

  printf("%d", ans);
  return 0;
}
