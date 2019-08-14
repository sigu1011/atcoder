#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> H(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &H.at(i));
  }

  for (int i = N - 1; i > 0; i--) {
    if (H.at(i) < H.at(i - 1)) {
      H.at(i - 1)--;
    }

    if (H.at(i) < H.at(i - 1)) {
      printf("No");
      return 0;
    }
  }

  printf("Yes");
  return 0;
}
