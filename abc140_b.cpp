#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> A(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &A.at(i));
    A.at(i)--;
  }

  vector<int> B(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &B.at(i));
  }

  vector<int> C(N - 1, 0);
  for (int i = 0; i < N - 1; i++) {
    scanf("%d", &C.at(i));
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    ans += B.at(A.at(i));
    if (i > 0 && A.at(i) == A.at(i - 1) + 1) {
      ans += C.at(A.at(i - 1));
    }
  }

  printf("%d", ans);
  return 0;
}
