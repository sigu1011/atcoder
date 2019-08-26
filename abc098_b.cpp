#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  string S;
  cin >> S;

  int ans = 0;
  for (int i = 1; i < N; i++) {
    int count = 0;

    for (char c = 'a'; c <= 'z'; c++) {
      bool left = false;
      bool right = false;

      for (int j = 0; j < i; j++) {
        if (S[j] == c) {
          left = true;
          break;
        }
      }

      for (int j = i; j < N; j++) {
        if (S[j] == c) {
          right = true;
          break;
        }
      }

      if (left && right) count++;
    }

    if (ans < count) ans = count;
  }

  printf("%d", ans);
  return 0;
}
