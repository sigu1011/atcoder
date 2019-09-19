#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> A(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &A.at(i));
    A.at(i) = A.at(i) - (i + 1);
  }

  sort(A.begin(), A.end());
  int b = A.at(N / 2);

  long long ans = 0;
  for (int i = 0; i < N; i++) {
    ans += (long long)abs(A.at(i) - b);
  }
  printf("%lld", ans);
  return 0;
}
