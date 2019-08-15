#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int L;
  scanf("%d%d", &N, &L);

  int ate = 1000;
  int sum = 0;
  for (int i = L; i <= L + N - 1; i++) {
    if (abs(ate) > abs(i)) ate = i;
    sum += i;
  }

  printf("%d", sum - ate);
  return 0;
}
