#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> p(N);
  for (int i = 0; i < N; i++) {
    cin >> p.at(i);
  }

  int count = 0;
  for (int i = 1; i < N - 1; i++) {
      if (p.at(i-1) < p.at(i) && p.at(i) < p.at(i+1)) {
        count++;
      } else if (p.at(i-1) > p.at(i) && p.at(i) > p.at(i+1)) {
        count++;
      }
  }

  cout << count << endl;
}
