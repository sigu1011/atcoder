#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin >> w;
  int x = 0;
  for (auto c : w) {
    x ^= c;
  }
  printf("%s", x == 0 ? "Yes" : "No");
  return 0;
}
