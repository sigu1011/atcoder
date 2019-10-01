#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);
  int ans = A + B + C + max({A, B, C}) * 9;
  printf("%d", ans);
  return 0;
}
