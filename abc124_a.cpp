#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  scanf("%d%d", &A, &B);

  int ans = 0;
  for (int i = 0; i < 2; i++) {
    if (A > B) {
      ans += A;
      A--;
    } else {
      ans += B;
      B--;
    }
  }

  printf("%d", ans);
  return 0;
}
