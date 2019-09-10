#include <bits/stdc++.h>
using namespace std;

const int NUM = 3;

int main() {
  int b[10] = {0};

  for (int i = 0; i < NUM; i++) {
    int length = 0;
    scanf("%d", &length);
    b[length]++;
  }

  if (b[5] == 2 && b[7] == 1) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}
