#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  scanf("%d%d", &N, &X);

  vector<int> m(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &m.at(i));
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    X -= m.at(i);
    ans++;
  }

  if (X > 0) {
    int min = *min_element(m.begin(), m.end());
    ans += X / min;
  }
  printf("%d", ans);
  return 0;
}
