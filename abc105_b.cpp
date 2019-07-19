#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  for (int i = 0; i <= N / 7; i++) {
    for (int j = 0; j <= N / 4; j++) {
      if (7 * i + 4 * j == N) {
        printf("Yes");
        return 0;
      }
    }
  }

  printf("No");
  return 0;
}
