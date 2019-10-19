#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> A(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &A.at(i));
  }

  vector<int> ans(N, 0);
  for (int i = 0; i < N; i++) ans.at(A.at(i) - 1) = i + 1;
  for (int i = 0; i < N; i++) printf("%d ", ans.at(i));
  return 0;
}
