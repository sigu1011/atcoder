#include <bits/stdc++.h>
using namespace std;

int dfs(long long x, int& n, bool has7, bool has5, bool has3) {
  if (x > n) return 0;
  return dfs(x * 10 + 7, n, true, has5, has3) +
         dfs(x * 10 + 5, n, has7, true, has3) +
         dfs(x * 10 + 3, n, has7, has5, true) + (has7 and has5 and has3);
}

int main() {
  int N;
  scanf("%d", &N);
  printf("%d", dfs(0LL, N, false, false, false));
  return 0;
}
