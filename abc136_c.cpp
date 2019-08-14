#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> H(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &H.at(i));
  }

  bool is_first = true;
  int baseline;
  for (int i = 0; i < N - 1; i++) {
    if (H.at(i) > H.at(i + 1)) {
      H.at(i)--;
      if (is_first) {
        baseline = H.at(i);
        is_first = false;
      } else {
        if (H.at(i) < baseline) {
          printf("No");
          return 0;
        } else {
          baseline = H.at(i);
        }
      }
    }

    if (H.at(i) > H.at(i + 1)) {
      printf("No");
      return 0;
    }
  }

  printf("Yes");
  return 0;
}
