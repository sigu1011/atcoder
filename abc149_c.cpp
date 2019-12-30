#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;

  while (1) {
    bool is_prime = false;
    int cnt = 0;
    int num = 0;
    for (int i = 2; i <= X; i++) {
      if (X % i == 0) {
        cnt++;
        num = i;
      }
      if (num == X && cnt == 1) {
        is_prime = true;
        break;
      }
    }
    if (is_prime) {
      break;
    }
    X++;
  }

  cout << X << endl;
  return 0;
}
