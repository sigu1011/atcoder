#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;
  printf("%s", N.insert(0, "ABC").c_str());
  return 0;
}
