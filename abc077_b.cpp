#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  int ans = 1;
  while (1) {
    if (pow(ans, 2) > N) {
      break;
    } else {
      ans++;
    }
  }
  printf("%d", (int)pow(ans - 1, 2));
  return 0;
}
