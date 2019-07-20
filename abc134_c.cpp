#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<pair<int, int>> A(N, make_pair(0, 0));

  for (int i = 0; i < N; i++) {
    int point;
    scanf("%d", &point);
    pair<int, int> p = make_pair(point, i);
    A.at(i) = p;
  }

  sort(A.begin(), A.end());
  reverse(A.begin(), A.end());

  int max_point = A.at(0).first;
  int max_index = A.at(0).second;
  int second_point = A.at(1).first;

  for (int i = 0; i < N; i++) {
    if (i == max_index) {
      printf("%d\n", second_point);
    } else {
      printf("%d\n", max_point);
    }
  }
}
