#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  int A = N / 2;
  int B = N - A;

  int min_sum_all = 100000;
  for (int i = 0; i < N / 2; i++) {
    int sum_A = 0;
    int sum_B = 0;

    int tmp_A = A;
    while (tmp_A > 0) {
      int a = tmp_A % 10;
      sum_A += a;
      tmp_A = tmp_A / 10;
    }

    int tmp_B = B;
    while (tmp_B > 0) {
      int b = tmp_B % 10;
      sum_B += b;
      tmp_B = tmp_B / 10;
    }

    if (sum_A + sum_B < min_sum_all) {
      min_sum_all = sum_A + sum_B;
    }

    A--;
    B++;
  }
  printf("%d", min_sum_all);
  return 0;
}
