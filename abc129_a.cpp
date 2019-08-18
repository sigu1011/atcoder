#include <bits/stdc++.h>
using namespace std;

int main() {
  int P, Q, R;
  scanf("%d%d%d", &P, &Q, &R);

  printf("%d", min(P + R, min(P + Q, Q + R)));
  return 0;
}
