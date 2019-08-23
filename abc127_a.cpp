#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  scanf("%d%d", &A, &B);

  if (A >= 13) {
    printf("%d", B);
  } else if (6 <= A && A <= 12) {
    printf("%d", B / 2);
  } else if (A <= 5) {
    printf("%d", 0);
  }
  return 0;
}
