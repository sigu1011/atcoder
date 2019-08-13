#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int digit = 0;
    int tmp = i;
    while (tmp > 0) {
      tmp /= 10;
      digit++;
    }
    if (digit % 2 != 0) ans++;
  }

  printf("%d", ans);
  return 0;
}
