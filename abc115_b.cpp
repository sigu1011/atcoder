#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int ans = 0;
  int max_p = 0;
  for (int i = 0; i < N; i++) {
    int p = 0;
    scanf("%d", &p);
    ans += p;
    max_p = max(max_p, p);
  }

  printf("%d", ans - (max_p / 2));
  return 0;
}
