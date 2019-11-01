#include <bits/stdc++.h>
using namespace std;

bool is_number(char num) { return 0 <= num - '0' && num - '0' <= 9; }

int main() {
  int A, B;
  scanf("%d%d", &A, &B);
  string S;
  cin >> S;

  bool is_valid = true;
  for (int i = 0; i < A + B + 1; i++) {
    if (i == A) {
      if (S.at(i) != '-') is_valid = false;
    } else {
      if (!is_number(S.at(i))) is_valid = false;
    }
  }

  if (is_valid)
    printf("Yes");
  else
    printf("No");
  return 0;
}
