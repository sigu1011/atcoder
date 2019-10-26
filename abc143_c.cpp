#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  string S;
  cin >> S;

  int ans = 0;
  for (int i = 0; i < N - 1; i++) {
    if (S.at(i) != S.at(i + 1)) ans++;
  }

  printf("%d", ans + 1);
  return 0;
}
