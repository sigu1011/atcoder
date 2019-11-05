#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  scanf("%d%d", &A, &B);
  if (A + B < 10) {
    printf("%d", A + B);
  } else {
    printf("error");
  }
  return 0;
}
