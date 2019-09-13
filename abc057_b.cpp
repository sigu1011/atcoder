#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  scanf("%d%d", &N, &M);

  vector<pair<int, int>> student(N, make_pair(0, 0));
  for (int i = 0; i < N; i++) {
    int x = 0, y = 0;
    scanf("%d%d", &x, &y);
    student.at(i) = make_pair(x, y);
  }
  vector<pair<int, int>> checkpoint(M, make_pair(0, 0));
  for (int i = 0; i < M; i++) {
    int x = 0, y = 0;
    scanf("%d%d", &x, &y);
    checkpoint.at(i) = make_pair(x, y);
  }

  for (int i = 0; i < N; i++) {
    int min_distance = 1e9;
    int select_point = 0;
    for (int j = 0; j < M; j++) {
      int d = 0;
      d += abs(student.at(i).first - checkpoint.at(j).first);
      d += abs(student.at(i).second - checkpoint.at(j).second);
      if (d < min_distance) {
        min_distance = d;
        select_point = j + 1;
      }
    }
    printf("%d\n", select_point);
  }
  return 0;
}
