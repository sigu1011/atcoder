#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  scanf("%d%d", &N, &D);

  int ans = 0;
  int range = 0;
  int add_range = 2 * D + 1;
  while (range < N) {
    range += add_range;
    ans++;
  }
  printf("%d", ans);
}
