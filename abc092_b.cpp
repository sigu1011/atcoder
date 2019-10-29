#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D, X;
  scanf("%d%d%d", &N, &D, &X);

  vector<int> A(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &A.at(i));
  }

  int ans = X;
  for (int i = 0; i < N; i++) {
    int days = 1;
    while (days <= D) {
      ans++;
      days += A.at(i);
    }
  }

  printf("%d", ans);
  return 0;
}
