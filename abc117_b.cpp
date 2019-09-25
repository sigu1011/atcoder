#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int sum = 0;
  int max_L = 0;
  for (int i = 0; i < N; i++) {
    int L = 0;
    scanf("%d", &L);
    sum += L;
    max_L = max(max_L, L);
  }

  if (max_L < sum - max_L)
    printf("Yes");
  else
    printf("No");
  return 0;
}
