#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  int x = stoi(a + b);
  double i_part = 0.0;
  double f_part = 0.0;
  f_part = modf(sqrt(x), &i_part);

  if (i_part > 0 && f_part == 0.0) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
