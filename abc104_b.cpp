#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (S.front() == 'A') {
    int num_C = 0;
    for (int i = 2; i <= S.length() - 2; i++) {
      if (S.at(i) == 'C') num_C++;
    }

    if (num_C == 1) {
      int num_lowercase = 0;
      for (auto s : S) {
        if ('a' <= s && s <= 'z') num_lowercase++;
      }
      if (num_lowercase == S.length() - 2) {
        printf("AC");
        return 0;
      }
    }
  }

  printf("WA");
  return 0;
}
