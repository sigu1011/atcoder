#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int ans = 0;
  for (int i = 1; i <= N; i += 2) {
    int count = 0;
    for (int j = 1; j <= i; j += 2) {
      if (i % j == 0) count++;
    }
    if (count == 8) ans++;
  }

  printf("%d", ans);
  return 0;
}
