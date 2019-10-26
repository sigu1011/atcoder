#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X;
  scanf("%d%d%d", &N, &M, &X);

  int left = 0;
  int right = 0;
  for (int i = 0; i < M; i++) {
    int A = 0;
    scanf("%d", &A);
    if (A < X) {
      left++;
    } else {
      right++;
    }
  }

  printf("%d", min(left, right));
  return 0;
}
