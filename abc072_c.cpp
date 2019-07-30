#include <bits/stdc++.h>
using namespace std;
const int BUCKET_SIZE = 99999;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> a(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &a.at(i));
  }

  int bucket[BUCKET_SIZE] = {0};
  for (auto x : a) {
    bucket[x]++;
  }

  int ans = 0;
  for (int i = 0; i <= BUCKET_SIZE - 2; i++) {
    int X = bucket[i] + bucket[i + 1] + bucket[i + 2];
    if (X > ans) ans = X;
  }

  printf("%d", ans);
  return 0;
}
