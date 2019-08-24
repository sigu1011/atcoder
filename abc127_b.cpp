#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, D, x;
  scanf("%d%d%d", &r, &D, &x);

  for (int i = 0; i < 10; i++) {
    int weight = r * x - D;
    printf("%d\n", weight);
    x = weight;
  }
  return 0;
}
