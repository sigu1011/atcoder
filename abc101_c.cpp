#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  int num_group = 1;
  while (N > K + (K - 1) * (num_group - 1)) {
    num_group++;
  }

  printf("%d", num_group);
  return 0;
}
