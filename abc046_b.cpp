#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  int ans = K * pow((K - 1), (N - 1));

  printf("%d", ans);
}
