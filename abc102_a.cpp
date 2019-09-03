#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  if (N % 2 == 0) {
    printf("%d", N);
  } else {
    printf("%d", 2 * N);
  }
  return 0;
}
