#include <bits/stdc++.h>
using namespace std;

int main() {
  double A, B;
  cin >> A >> B;

  if (A > B) {
    printf("GREATER");
  } else if (A == B) {
    printf("EQUAL");
  } else {
    printf("LESS");
  }
  return 0;
}
