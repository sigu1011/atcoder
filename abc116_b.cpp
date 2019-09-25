#include <bits/stdc++.h>
using namespace std;

int main() {
  int s;
  scanf("%d", &s);

  int ans = 1;
  while (1) {
    if (s == 4 || s == 2 || s == 1) break;

    if (s % 2 == 0) {
      s /= 2;
    } else {
      s = 3 * s + 1;
    }
    ans++;
  }

  printf("%d", ans + 3);
  return 0;
}
