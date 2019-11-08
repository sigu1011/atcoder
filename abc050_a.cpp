#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  char op;
  cin >> A >> op >> B;
  if (op == '+') {
    printf("%d", A + B);
  } else {
    printf("%d", A - B);
  }
  return 0;
}
