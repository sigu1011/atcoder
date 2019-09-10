#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, C;
  scanf("%d%d%d", &N, &M, &C);

  vector<int> B(M, 0);
  for (int i = 0; i < M; i++) {
    scanf("%d", &B.at(i));
  }

  vector<vector<int>> A(N, vector<int>(M, 0));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      scanf("%d", &A.at(i).at(j));
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int sum = 0;
    for (int j = 0; j < M; j++) {
      sum += A.at(i).at(j) * B.at(j);
    }
    sum += C;
    if (sum > 0) ans++;
  }

  printf("%d", ans);
  return 0;
}
