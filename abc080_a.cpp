#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  scanf("%d%d%d", &N, &A, &B);
  printf("%d", min(N * A, B));
  return 0;
}
