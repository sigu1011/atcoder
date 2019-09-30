#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  while (1) {
    if ((N / 100) == (N / 10) % 10 && (N / 10) % 10 == N % 10) {
      break;
    }
    N++;
  }

  printf("%d", N);
  return 0;
}
