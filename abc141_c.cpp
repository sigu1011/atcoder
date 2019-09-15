#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, Q;
  scanf("%d%d%d", &N, &K, &Q);

  vector<int> A(N, K);

  vector<int> b(N, Q);
  for (int i = 0; i < N; i++) {
    int ca = 0;
    scanf("%d", &ca);
    b.at(ca - 1)--;
  }

  for (int i = 0; i < N; i++) {
    if (A.at(i) - b.at(i) > 0)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}
