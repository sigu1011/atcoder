#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  vector<int> X(N, 0);
  vector<int> Y(N, 0);
  for (int i = 0; i < N; i++) {
    cin >> X.at(i);
    Y.at(i) = X.at(i);
  }

  sort(Y.begin(), Y.end());
  int mid = Y.at(N / 2);
  for (int i = 0; i < N; i++) {
    if (X.at(i) < mid) {
      cout << Y.at(N / 2) << "\n";
    } else {
      cout << Y.at(N / 2 - 1) << "\n";
    }
  }
  return 0;
}
