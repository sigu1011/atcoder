#include <bits/stdc++.h>
using namespace std;

int A[30] = {0};

int main() {
  int N, M;
  scanf("%d%d", &N, &M);

  for (int i = 0; i < N; i++) {
    int K = 0;
    scanf("%d", &K);
    for (int j = 0; j < K; j++) {
      int l = 0;
      scanf("%d", &l);
      A[l - 1]++;
    }
  }

  int ans = 0;
  for (int i = 0; i < M; i++) {
    if (A[i] == N) ans++;
  }

  printf("%d", ans);
  return 0;
}
