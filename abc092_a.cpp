#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  scanf("%d%d%d%d", &A, &B, &C, &D);
  printf("%d", min(A, B) + min(C, D));
  return 0;
}
