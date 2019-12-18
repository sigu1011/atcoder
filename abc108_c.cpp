#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  vector<long long> num(K, 0);
  for (int i = 1; i <= N; i++) {
    num[i % K]++;
  }

  long long ans = num[0] * num[0] * num[0];
  if (K % 2 == 0) ans += num[K / 2] * num[K / 2] * num[K / 2];

  printf("%lld", ans);
  return 0;
}
