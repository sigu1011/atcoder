#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);

  vector<int> s{A, B, C};
  sort(s.begin(), s.end());

  if (s.at(0) == 5 && s.at(1) == 5 && s.at(2) == 7) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}
