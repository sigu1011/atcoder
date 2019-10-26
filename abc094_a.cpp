#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, X;
  scanf("%d%d%d", &A, &B, &X);

  if (A <= X && A + B >= X) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}
