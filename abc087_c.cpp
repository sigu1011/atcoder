#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<vector<int>> S(2, vector<int>(N + 1, 0));
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < N; j++) {
      int A;
      cin >> A;
      S.at(i).at(j + 1) = S.at(i).at(j) + A;
    }
  }

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int sum = 0;
    int left = 0;
    int right = i;
    sum += S.at(0).at(right) - S.at(0).at(left);
    sum += S.at(1).at(N) - S.at(1).at(right - 1);
    ans = max(ans, sum);
  }

  printf("%d", ans);
  return 0;
}
