#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  for (int i = 0; i < S.size() - 1; i++) {
    if (S.at(i) == S.at(i + 1)) {
      printf("Bad");
      return 0;
    }
  }

  printf("Good");
  return 0;
}
