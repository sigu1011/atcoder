#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, X, Y;
  scanf("%d%d%d%d", &N, &K, &X, &Y);
  printf("%d", N < K ? N * X : (K * X + (N - K) * Y));
  return 0;
}
