#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  double ans = 0.0;
  for (int i = 0; i < N; i++) {
    double x = 0.0;
    scanf("%lf", &x);
    string u;
    cin >> u;
    if (u == "JPY") {
      ans += x;
    } else {
      ans += x * 380000.0;
    }
  }

  printf("%.16lf", ans);
  return 0;
}
