#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  scanf("%d%d", &N, &Q);
  string S;
  cin >> S;

  vector<int> a(N, 0);
  for (int i = 0; i < N - 1; i++) {
    a.at(i + 1) = a.at(i);
    if (S.at(i) == 'A' && S.at(i + 1) == 'C') a.at(i + 1)++;
  }

  for (int i = 0; i < Q; i++) {
    int left = 0, right = 0;
    scanf("%d%d", &left, &right);
    printf("%d\n", a.at(right - 1) - a.at(left - 1));
  }
  return 0;
}
