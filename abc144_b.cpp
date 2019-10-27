#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  string ans = "No";
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      if (i * j == N) ans = "Yes";
    }
  }

  printf("%s", ans.c_str());
  return 0;
}
