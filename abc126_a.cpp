#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);
  string S;
  cin >> S;

  S.at(K - 1) = S.at(K - 1) + 0x20;

  cout << S << endl;
  return 0;
}
