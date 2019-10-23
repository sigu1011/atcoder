#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  int top = b - a;
  int height = top * (1 + top) / 2;
  printf("%d", height - b);
  return 0;
}
