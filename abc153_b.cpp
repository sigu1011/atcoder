#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, N;
  scanf("%d%d", &H, &N);
  vector<int> A(N, 0);
  for (int i = 0; i < N; i++) {
    scanf("%d", &A.at(i));
  }

  string ans = "No";
  for (int i = 0; i < N; i++) {
    H -= A.at(i);
    if (H <= 0) {
      ans = "Yes";
      break;
    }
  }

  printf("%s", ans.c_str());
  return 0;
}
