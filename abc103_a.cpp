#include <bits/stdc++.h>
using namespace std;

int main() {
  int A1, A2, A3;
  scanf("%d%d%d", &A1, &A2, &A3);
  printf("%d", max({A1, A2, A3}) - min({A1, A2, A3}));
  return 0;
}
