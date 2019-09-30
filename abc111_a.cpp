#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  for (int i = 0; i < n.size(); i++) {
    if (n.at(i) == '1') {
      n.at(i) = '9';
    } else if (n.at(i) == '9') {
      n.at(i) = '1';
    }
  }

  printf("%d", stoi(n));
  return 0;
}
