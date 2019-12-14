#include <bits/stdc++.h>
using namespace std;

int cnt_odd[100010];
int cnt_even[100010];

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    int v;
    cin >> v;
    if (i % 2 == 1) {
      cnt_odd[v]++;
    } else {
      cnt_even[v]++;
    }
  }

  // 奇数番目の最頻値、2番目に多い値
  int O1 = 0, O2 = 0;
  // 偶数番目の最頻値、2番目に多い値
  int E1 = 0, E2 = 0;
  for (int i = 1; i <= 100000; i++) {
    if (cnt_odd[O1] < cnt_odd[i]) {
      O2 = O1;
      O1 = i;
    } else if (cnt_odd[O2] < cnt_odd[i]) {
      O2 = i;
    }

    if (cnt_even[E1] < cnt_even[i]) {
      E2 = E1;
      E1 = i;
    } else if (cnt_even[E2] < cnt_even[i]) {
      E2 = i;
    }
  }

  int ans1 = n - cnt_odd[O1] - cnt_even[E1];
  int ans2 = n - cnt_odd[O1] - cnt_even[E2];
  int ans3 = n - cnt_odd[O2] - cnt_even[E1];
  if (O1 != E1) {
    printf("%d", ans1);
  } else {
    printf("%d", min(ans2, ans3));
  }
  return 0;
}
