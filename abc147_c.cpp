#include <bits/stdc++.h>
using namespace std;

int A[20];
int x[20][20];
int y[20][20];

int main() {
  int N;
  scanf("%d", &N);

  for (int i = 0; i < N; ++i) {
    scanf("%d", &A[i]);
    for (int j = 0; j < A[i]; ++j) {
      scanf("%d%d", &x[i][j], &y[i][j]);
    }
  }

  int ans = 0;
  // bit全探索
  for (int bits = 0; bits < (1 << N); ++bits) {
    bool is_consistent = true;

    for (int i = 0; i < N; i++)
      if ((bits >> i) & 1) {
        // シミュレートしている状態と各正直者の証言が整合しているか確認
        for (int j = 0; j < A[i]; j++) {
          if ((bits >> (x[i][j] - 1)) & 1 ^ y[i][j]) is_consistent = false;
        }
      }

    if (is_consistent) ans = max(ans, (int)bitset<15>(bits).count());
  }

  cout << ans << endl;
  return 0;
}
