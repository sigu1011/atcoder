#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  string ans = "";
  while (N != 0) {
    if (N % 2 != 0) {
      N--;
      ans = "1" + ans;
    } else {
      ans = "0" + ans;
    }
    N /= -2;
  }

  if (ans == "") ans = "0";

  printf("%s", ans.c_str());
  return 0;
}
