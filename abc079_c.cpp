#include <bits/stdc++.h>
using namespace std;

int main() {
  string numbers;
  cin >> numbers;

  int a = numbers.at(0) - '0';
  int b = numbers.at(1) - '0';
  int c = numbers.at(2) - '0';
  int d = numbers.at(3) - '0';

  if (a + b + c + d == 7) {
    printf("%d+%d+%d+%d=7", a, b, c, d);
    return 0;
  }
  if (a - b + c + d == 7) {
    printf("%d-%d+%d+%d=7", a, b, c, d);
    return 0;
  }
  if (a + b - c + d == 7) {
    printf("%d+%d-%d+%d=7", a, b, c, d);
    return 0;
  }
  if (a - b - c + d == 7) {
    printf("%d-%d-%d+%d=7", a, b, c, d);
    return 0;
  }
  if (a + b + c - d == 7) {
    printf("%d+%d+%d-%d=7", a, b, c, d);
    return 0;
  }
  if (a - b + c - d == 7) {
    printf("%d-%d+%d-%d=7", a, b, c, d);
    return 0;
  }
  if (a + b - c - d == 7) {
    printf("%d+%d-%d-%d=7", a, b, c, d);
    return 0;
  }
  if (a - b - c - d == 7) {
    printf("%d-%d-%d-%d=7", a, b, c, d);
    return 0;
  }
}
