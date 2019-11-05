#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  scanf("%d%d", &x, &y);
  int group[] = {0, 1, 3, 1, 2, 1, 2, 1, 1, 2, 1, 2, 1};
  printf("%s", (group[x] == group[y]) ? "Yes" : "No");
  return 0;
}
