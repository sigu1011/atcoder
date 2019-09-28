#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  scanf("%d%d", &N, &M);

  vector<int> X(M, 0);
  for (int i = 0; i < M; i++) {
    scanf("%d", &X.at(i));
  }
  sort(X.begin(), X.end());

  vector<int> distance(M - 1, 0);
  for (int i = 0; i < M - 1; i++) {
    distance.at(i) = X.at(i + 1) - X.at(i);
  }
  sort(distance.begin(), distance.end(), greater<int>());

  long long ans = 0;
  for (int i = N - 1; i < M - 1; i++) {
    ans += (long long)distance.at(i);
  }

  printf("%lld", ans);
  return 0;
}
