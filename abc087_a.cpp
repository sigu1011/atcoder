#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, A, B;
  scanf("%d%d%d", &X, &A, &B);
  printf("%d", (X - A) % B);
  return 0;
}
