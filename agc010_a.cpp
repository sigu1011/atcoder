#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int odd_count = 0;
  for (int i = 0; i < N; i++) {
    int A = 0;
    scanf("%d", &A);
    if (A % 2 != 0) odd_count++;
  }

  if (odd_count % 2 == 0)
    printf("YES");
  else
    printf("NO");

  return 0;
}
