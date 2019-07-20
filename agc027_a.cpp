#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, x;
  scanf("%d%d", &N, &x);

  vector<int> a(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &a.at(i));
  }

  sort(a.begin(), a.end());

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (x - a.at(i) >= 0) {
      x -= a.at(i);
      ans++;
    } else {
      break;
    }
  }

  if (ans == N && x > 0) {
    // N人にお菓子を配り、それでも余っている場合は誰か一人に余りを渡す
    ans--;
  }

  printf("%d", ans);
}
