#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  if (N == 1 && M == 1) {
    printf("1");
  } else if (N == 1 || M == 1) {
    printf("%d", N * M - 2);
  } else {
    printf("%d", N * M - 2 * (N + M - 2));
  }
  return 0;
}
