#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> A(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  // +1 : 単調増加
  // -1 : 単調減少
  //  0 : 値に変化がない
  int state = 0;
  int ans = 1;
  for (int i = 0; i < N - 1; i++) {
    int current = A.at(i);
    int next = A.at(i + 1);
    int diff = current - next;
    switch (state) {
      case 0:
        if (diff > 0) {
          state = 1;
        } else if (diff < 0) {
          state = -1;
        } else {
          // diff == 0 の場合は何もしない
        }
        break;
      case 1:
        if (diff < 0) {
          ans++;
          state = 0;
        }
        break;
      case -1:
        if (diff > 0) {
          ans++;
          state = 0;
        }
        break;
      default:
        break;
    }
  }
  printf("%d", ans);
}
