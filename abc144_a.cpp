#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  scanf("%d%d", &A, &B);
  if (A <= 9 && B <= 9) {
    printf("%d", A * B);
  } else {
    printf("-1");
  }
  return 0;
}
