#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  scanf("%d%d", &a, &b);

  if (a <= b) {
    printf("%d", a);
  } else {
    printf("%d", a - 1);
  }
  return 0;
}
