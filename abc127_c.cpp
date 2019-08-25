#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  scanf("%d%d", &N, &M);

  // 制約よりL ≤ R であるため、[L_MAX, R_MIN]を更新していけば良い.
  // 最終的に全てのゲートをIDカードの数はR_MIN - L_MAX + 1となる.
  int ans = 0;
  int L_MAX = 0;
  int R_MIN = 1e5 + 1;
  for (int i = 0; i < M; ++i) {
    int L, R;
    scanf("%d%d", &L, &R);
    L_MAX = max(L_MAX, L);
    R_MIN = min(R_MIN, R);
  }

  // 全てのゲートを通過できるIDカードがある場合
  if (R_MIN - L_MAX + 1 > 0) {
    ans = R_MIN - L_MAX + 1;
  }

  printf("%d", ans);
  return 0;
}
