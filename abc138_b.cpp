#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  double sum = 0.0;
  for (int i = 0; i < N; i++) {
    double A = 0.0;
    cin >> A;
    sum += 1.0 / A;
  }

  double ans = 1.0 / sum;
  // 以下の出力方法もある
  // cout << setprecision(16) << ans << endl;
  printf("%.16f", ans);
  return 0;
}
