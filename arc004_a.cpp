#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<vector<int>> C(N, vector<int>(2, 0));

  for (int i = 0; i < N; i++) {
    int X, Y;
    scanf("%d%d", &X, &Y);
    C.at(i).at(0) = X;
    C.at(i).at(1) = Y;
  }

  double max_distance = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 1; i + j < N; j++) {
      int tmp = 0;
      double distance = 0;
      for (int k = 0; k < 2; k++) {
        tmp += pow((C.at(i).at(k) - C.at(i + j).at(k)), 2);
      }
      distance = sqrt(tmp);
      if (distance > max_distance) max_distance = distance;
    }
  }
  printf("%f", max_distance);
}
