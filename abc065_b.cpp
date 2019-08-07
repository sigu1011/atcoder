#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int bucket[100000] = {0};

  vector<int> a(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &a.at(i));
  }

  int ans = 0;
  int next = 0;
  while (true) {
    ans++;
    if (a.at(next) == 2) {
      break;
    }

    bucket[a.at(next)]++;
    if (bucket[a.at(next)] > 1) {
      printf("-1");
      return 0;
    }

    next = a.at(next) - 1;
  }

  printf("%d", ans);
  return 0;
}
