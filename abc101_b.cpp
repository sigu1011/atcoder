#include <bits/stdc++.h>
using namespace std;

int solve(const int& num) {
  int tmp = num;
  int digit_sums = 0;
  while (tmp > 0) {
    digit_sums += tmp % 10;
    tmp /= 10;
  }
  return digit_sums;
}

int main() {
  int N;
  scanf("%d", &N);

  if (N % solve(N) == 0) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
