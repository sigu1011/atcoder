#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  scanf("%d%d", &N, &A);

  int ans = pow(N, 2.0) - A;

  printf("%d", ans);
  return 0;
}
