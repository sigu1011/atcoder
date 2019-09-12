#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> ABC(3, 0);
  for (int i = 0; i < 3; i++) {
    scanf("%d", &ABC.at(i));
  }
  int K;
  scanf("%d", &K);

  sort(ABC.begin(), ABC.end());

  int ans = ABC.at(0) + ABC.at(1);
  for (int i = 0; i < K; i++) {
    ABC.at(2) = 2 * ABC.at(2);
  }
  ans += ABC.at(2);

  printf("%d", ans);
  return 0;
}
