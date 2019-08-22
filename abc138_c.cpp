#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  priority_queue<float, vector<float>, greater<float>> que;
  for (int i = 0; i < N; i++) {
    float v = 0;
    scanf("%f", &v);
    que.push(v);
  }

  float v1, v2;
  for (int i = 0; i < N - 1; i++) {
    v1 = que.top();
    que.pop();
    v2 = que.top();
    que.pop();
    que.push((v1 + v2) / 2);
  }

  printf("%.16f", que.top());
  return 0;
}
