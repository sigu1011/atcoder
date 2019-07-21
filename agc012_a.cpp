#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> a(3 * N, 0);
  for (int i = 0; i < 3 * N; i++) {
    scanf("%d", &a.at(i));
  }

  sort(a.begin(), a.end(), greater<int>());

  long ans = 0;
  for (int i = 0; i < N; i++) {
    ans += (long)a.at(i * 2 + 1);
  }

  printf("%ld", ans);
}
