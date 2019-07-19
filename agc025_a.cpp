#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int sum = 0;
  int tmp = N;
  while (tmp > 0) {
    int t = tmp % 10;
    sum += t;
    tmp = tmp / 10;
  }

  if (sum == 1)
    printf("10");
  else
    printf("%d", sum);

  return 0;
}
