#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  string ans = (N != 0 ? "" : "0");
  while (N != 0) {
    if (N % -2 != 0) {
      ans = "1" + ans;
      N -= 1;
    } else {
      ans = "0" + ans;
    }
    N /= -2;
  }

  printf("%s", ans.c_str());
  return 0;
}
