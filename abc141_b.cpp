#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  for (int i = 0; i < S.size(); i++) {
    if ((i + 1) % 2 == 0) {
      if (S.at(i) == 'R' || S.at(i) == 'U' || S.at(i) == 'D') {
        continue;
      } else {
        printf("No");
        return 0;
      }
    } else {
      if (S.at(i) == 'L' || S.at(i) == 'U' || S.at(i) == 'D') {
        continue;
      } else {
        printf("No");
        return 0;
      }
    }
  }
  printf("Yes");
  return 0;
}
