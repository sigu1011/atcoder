#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, t;
  scanf("%d%d", &X, &t);

  if (X - t >= 0) {
    printf("%d", X - t);
  } else {
    printf("0");
  }
  return 0;
}
