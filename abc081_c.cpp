#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  vector<int> buckets(N, 0);
  for (int i = 0; i < N; i++) {
    int A;
    scanf("%d", &A);
    buckets[A - 1]++;
  }

  sort(buckets.begin(), buckets.end(), greater<int>());

  int num = 0;
  for (int i = 0; i < K; i++) {
    // バケットから大きい順にK種類を取り出した際に、ボールが何個あるか
    num += buckets[i];
  }
  // 足りない分はボールの整数にかかわらず、書き換える
  int ans = N - num;
  printf("%d", ans);
  return 0;
}
