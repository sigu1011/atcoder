#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);

  int f = A % B;
  int x = A;
  while (x % B != C) {
    x += A;
    if (x % B == f) {
      printf("NO");
      return 0;
    }
  }

  printf("YES");
  return 0;
}
