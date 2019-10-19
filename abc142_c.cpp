#include <bits/stdc++.h>
using namespace std;

bool compare_by_second(pair<int, int> a, pair<int, int> b) {
  if (a.second != b.second) {
    return a.second < b.second;
  } else {
    return a.first < b.first;
  }
}

int main() {
  int N;
  scanf("%d", &N);

  vector<pair<int, int>> A(N);
  for (int i = 0; i < N; i++) {
    int order = 0;
    scanf("%d", &order);
    A.at(i) = make_pair(i + 1, order);
  }

  sort(A.begin(), A.end(), compare_by_second);

  for (auto p : A) {
    cout << p.first << " ";
  }
  return 0;
}
