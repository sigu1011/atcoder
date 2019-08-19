#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  scanf("%d%d", &N, &X);

  int D = 0;
  int ans = 1;
  for (int i = 0; i < N; ++i) {
    int L = 0;
    scanf("%d", &L);
    D += L;
    if (D <= X) ans++;
  }

  printf("%d", ans);
  return 0;
}
