#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  scanf("%d", &N);
  cin >> S;
  for (int i = 1; i <= N / 2; i++) {
    string T = S.substr(0, i) + S.substr(0, i);
    if (T == S) {
      printf("Yes");
      return 0;
    }
  }
  printf("No");
  return 0;
}
