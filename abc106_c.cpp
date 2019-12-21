#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) {
  if ('0' <= c && c <= '9') return c - '0';
  return -1;
}

int main() {
  string S;
  cin >> S;
  long long K;
  cin >> K;

  char ans = '1';
  for (int i = 0; i < K; i++) {
    if (S.at(i) == '1') {
      continue;
    } else {
      ans = S.at(i);
      break;
    }
  }

  printf("%d", ctoi(ans));
  return 0;
}
