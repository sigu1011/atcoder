#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  printf("%s", (a + b + c) == 2 * max(c, max(a, b)) ? "Yes" : "No");
  return 0;
}
