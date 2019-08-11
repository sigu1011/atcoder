#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  scanf("%d%d", &A, &B);

  int ans = max(A * B, max((A + B), (A - B)));

  printf("%d", ans);
  return 0;
}
