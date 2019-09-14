#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  scanf("%d%d", &N, &Q);
  string S;
  cin >> S;

  vector<int> a(N, 0);
  for (int i = 0; i < N - 1; i++) {
    if (S.at(i) == 'A' && S.at(i + 1) == 'C') a.at(i + 1)++;
  }

  vector<int> sum(N + 1, 0);
  for (int i = 0; i < N; i++) {
    sum.at(i + 1) = sum.at(i) + a.at(i);
  }

  for (int i = 0; i < Q; i++) {
    int left = 0, right = 0;
    scanf("%d%d", &left, &right);
    printf("%d\n", sum.at(right) - sum.at(left));
  }
  return 0;
}
