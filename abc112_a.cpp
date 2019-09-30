#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  int A, B;
  if (N > 1) {
    scanf("%d%d", &A, &B);
  }

  if (N == 1) {
    printf("Hello World");
  } else {
    printf("%d", A + B);
  }
  return 0;
}
