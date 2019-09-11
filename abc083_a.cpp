#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  scanf("%d%d%d%d", &A, &B, &C, &D);

  if (A + B > C + D) {
    printf("Left");
  } else if (A + B == C + D) {
    printf("Balanced");
  } else {
    printf("Right");
  }
  return 0;
}
