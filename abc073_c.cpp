#include <bits/stdc++.h>
using namespace std;
int N, ptr, res;
int A[100000];

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; i++) scanf("%d", &A[i]);

  sort(A, A + N);

  while (ptr < N) {
    int cc = A[ptr], f = 0;
    // 一致するところのみ、数え上げる
    while (ptr < N && A[ptr] == cc) {
      f++;
      ptr++;
    }
    res += f % 2;
  }

  printf("%d\n", res);
  return 0;
}
