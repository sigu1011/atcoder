#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  int X = N;
  int sum = 0;
  while (X > 0) {
    sum += X % 10;
    X = X / 10;
  }
  if (N % sum == 0)
    printf("Yes");
  else
    printf("No");
  return 0;
}
