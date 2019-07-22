#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  scanf("%d%d", &N, &M);

  vector<int> buckets(N, 0);

  for (int i = 0; i < M; i++) {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);
    buckets.at(a - 1)++;
    buckets.at(b - 1)++;
  }

  for (auto bucket : buckets) printf("%d\n", bucket);

  return 0;
}
