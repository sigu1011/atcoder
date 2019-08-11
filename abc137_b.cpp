#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, X;
  scanf("%d%d", &K, &X);

  vector<int> ans(2 * K + 1, 0);
  ans.push_back(X);
  for (int i = 1; i <= K; i++) {
    int d1 = X - i;
    int d2 = X + i;
    ans.push_back(d1);
    ans.push_back(d2);
  }

  sort(ans.begin(), ans.end());

  for (auto d : ans) {
    cout << d << " ";
  }
  cout << endl;

  return 0;
}
