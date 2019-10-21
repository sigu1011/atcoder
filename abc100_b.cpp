#include <bits/stdc++.h>
using namespace std;

int main() {
  int D, N;
  scanf("%d%d", &D, &N);

  int ans = N * pow(100, D);
  if (N == 100) ans += pow(100, D);
  printf("%d", ans);
  return 0;
}
