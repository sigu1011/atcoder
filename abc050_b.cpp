#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  scanf("%d", &N);

  int sum = 0;
  vector<int> T(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &T.at(i));
    sum += T.at(i);
  }

  scanf("%d", &M);
  vector<pair<int, int>> D(M, make_pair(0, 0));
  for (int i = 0; i < M; i++) {
    int P, X;
    scanf("%d%d", &P, &X);
    D.at(i) = make_pair(P - 1, X);
  }

  for (int i = 0; i < M; i++) {
    int diff = T.at(D.at(i).first) - D.at(i).second;
    printf("%d\n", sum - diff);
  }
  return 0;
}
