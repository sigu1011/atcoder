#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
  int sum = 1;
  for (int i = 1; i <= n; i++) {
    sum *= i;
  }
  return sum;
}

int main() {
  int N;
  scanf("%d", &N);
  vector<pair<int, int>> P(N);
  for (int i = 0; i < N; i++) {
    int x, y;
    scanf("%d%d", &x, &y);
    P.at(i) = make_pair(x, y);
  }

  vector<int> v(N);
  iota(v.begin(), v.end(), 1);

  double sum = 0;
  do {
    for (int i = 0; i < N - 1; i++) {
      sum +=
          sqrt(pow(P.at(v.at(i) - 1).first - P.at(v.at(i + 1) - 1).first, 2) +
               pow(P.at(v.at(i) - 1).second - P.at(v.at(i + 1) - 1).second, 2));
    }
  } while (next_permutation(v.begin(), v.end()));

  printf("%.16f", sum / factorial(N));
  return 0;
}
