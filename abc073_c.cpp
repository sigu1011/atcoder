#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  set<int> s;
  for (int i = 0; i < N; i++) {
    int A;
    scanf("%d", &A);
    auto itr = s.find(A);
    if (itr != s.end()) {
      s.erase(A);
    } else {
      s.insert(A);
    }
  }

  printf("%lu", s.size());
  return 0;
}
