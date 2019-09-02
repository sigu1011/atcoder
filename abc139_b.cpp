#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  scanf("%d%d", &A, &B);

  int sum_power_sorce = 1;
  int num_power_strip = 0;
  while (sum_power_sorce < B) {
    num_power_strip++;
    sum_power_sorce -= 1;
    sum_power_sorce += A;
  }

  printf("%d", num_power_strip);
  return 0;
}
