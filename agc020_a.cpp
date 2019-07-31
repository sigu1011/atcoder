#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  scanf("%d%d%d", &N, &A, &B);

  if ((B - A) % 2 == 0)
    printf("Alice");
  else
    printf("Borys");

  return 0;
}
