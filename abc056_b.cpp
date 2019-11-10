#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, a, b;
  scanf("%d%d%d", &W, &a, &b);
  if (abs(a - b) <= W) {
    printf("0");
  } else {
    printf("%d", abs(a - b) - W);
  }
  return 0;
}
