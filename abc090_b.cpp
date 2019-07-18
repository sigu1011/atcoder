#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  scanf("%d%d", &A, &B);
  int ans = 0;
  for (int i = A; i <= B; i++) {
    int o = i % 10;
    int o_pair = i / 10000 % 10;
    int t = i / 10 % 10;
    int t_pair = i / 1000 % 10;
    if (o == o_pair && t == t_pair) ans++;
  }
  printf("%d", ans);
}
