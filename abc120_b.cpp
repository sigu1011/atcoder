#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, K;
  scanf("%d%d%d", &A, &B, &K);

  int ans = 0;
  int count = 0;
  for (int i = min(A, B); i > 0; i--) {
    if (A % i == 0 && B % i == 0) {
      ans = i;
      count++;
    }
    if (count == K) break;
  }

  printf("%d", ans);
  return 0;
}
