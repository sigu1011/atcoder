#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int cnt = 1;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    int a = 0;
    cin >> a;
    if (a == cnt) {
      cnt++;
      continue;
    } else {
      ans++;
      continue;
    }
  }

  if (ans != N) {
    printf("%d", ans);
  } else {
    printf("-1");
  }
  return 0;
}
