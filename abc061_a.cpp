#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);

  if (A <= C && C <= B)
    printf("Yes");
  else
    printf("No");
  return 0;
}
