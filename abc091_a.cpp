#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);

  if (A + B >= C) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
