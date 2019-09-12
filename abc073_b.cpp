#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int left = 0, right = 0;
    scanf("%d%d", &left, &right);
    ans += (right - left + 1);
  }

  printf("%d", ans);
  return 0;
}
