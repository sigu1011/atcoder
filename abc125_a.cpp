#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  float T;
  scanf("%d%d%f", &A, &B, &T);
  T += 0.5;

  double time = 0.0;
  int ans = 0;
  while (time + (double)A < T) {
    ans += B;
    time += (double)A;
  }

  printf("%d", ans);
  return 0;
}
