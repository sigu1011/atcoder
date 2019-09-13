#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int MAX = -1;
  int MIN = 1001;
  for (int i = 0; i < N; i++) {
    int A = 0;
    scanf("%d", &A);
    if (MIN > A) MIN = A;
    if (MAX < A) MAX = A;
  }

  printf("%d", MAX - MIN);
  return 0;
}
