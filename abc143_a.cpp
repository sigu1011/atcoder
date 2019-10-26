#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  scanf("%d%d", &A, &B);
  if (A <= 2 * B) {
    printf("0");
  } else {
    printf("%d", A - 2 * B);
  }
  return 0;
}
