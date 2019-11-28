#include <bits/stdc++.h>
using namespace std;

char rot(char c, int n) {
  if ('A' <= (c + n) && (c + n) <= 'Z') return (c + n);
  return ((c + n) % ('Z' + 1)) + 'A';
}

int main() {
  int N;
  scanf("%d", &N);
  string S;
  cin >> S;
  for (auto c : S) {
    cout << rot(c, N);
  }
  return 0;
}
