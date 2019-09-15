#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  scanf("%d%d", &N, &M);

  priority_queue<int> que;
  for (int i = 0; i < N; i++) {
    int A = 0;
    scanf("%d", &A);
    que.push(A);
  }

  for (int i = 0; i < M; i++) {
    int discount_A = que.top() / 2;
    que.pop();
    que.push(discount_A);
  }

  long long ans = 0;
  for (int i = 0; i < N; i++) {
    ans += (long long)que.top();
    que.pop();
  }
  printf("%lld", ans);
  return 0;
}
