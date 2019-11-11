#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  char S[N];
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }

  int x = 0;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'I') {
      x++;
    } else if (S[i] == 'D') {
      x--;
    }
    ans = max(ans, x);
  }

  printf("%d", ans);
  return 0;
}
