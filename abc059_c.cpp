#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  vector<long long> a(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  // 最初の数を負の数にして、最小の操作数を求める
  // 正の数である場合は、-1に操作してから最小の操作数を求める
  bool f = true;
  long long ans_1 = 0LL;
  long long sum = 0LL;
  for (int i = 0; i < n; i++) {
    sum += a.at(i);
    if (f) {
      if (sum >= 0) {
        while (sum >= 0) {
          sum--;
          ans_1++;
        }
      }
      f = false;
    } else {
      if (sum <= 0) {
        while (sum <= 0) {
          sum++;
          ans_1++;
        }
      }
      f = true;
    }
  }

  // 最初の数を正の数にして、最小の操作数を求める
  // 負の数である場合は、+1に操作してから最小の操作数を求める
  f = false;
  long long ans_2 = 0LL;
  sum = 0LL;
  for (int i = 0; i < n; i++) {
    sum += a.at(i);
    if (f) {
      if (sum >= 0) {
        while (sum >= 0) {
          sum--;
          ans_2++;
        }
      }
      f = false;
    } else {
      if (sum <= 0) {
        while (sum <= 0) {
          sum++;
          ans_2++;
        }
      }
      f = true;
    }
  }

  printf("%lld", min(ans_1, ans_2));
}
