#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int zero_count = 0;
  int one_count = 0;
  for (int i = 0; i < S.length(); i++) {
    if (S.at(i) == '0') {
      zero_count++;
    } else {
      one_count++;
    }
  }

  if (one_count == 0 || zero_count == 0) {
    printf("%d", 0);
  } else {
    printf("%d", 2 * min(zero_count, one_count));
  }
  return 0;
}
