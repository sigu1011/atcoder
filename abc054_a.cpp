#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  scanf("%d%d", &A, &B);
  if (A == 1) A = 14;
  if (B == 1) B = 14;

  if (A > B) {
    printf("Alice");
  } else if (A == B) {
    printf("Draw");
  } else {
    printf("Bob");
  }
  return 0;
}
