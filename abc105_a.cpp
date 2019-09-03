#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  scanf("%d%d", &N, &K);

  if (N % K == 0) {
    printf("0");
  } else {
    printf("1");
  }
  return 0;
}
