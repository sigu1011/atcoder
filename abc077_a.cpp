#include <bits/stdc++.h>
using namespace std;

int main() {
  string S1, S2;
  cin >> S1 >> S2;
  if (S1.at(0) == S2.at(2) && S1.at(1) == S2.at(1) && S1.at(2) == S2.at(0))
    printf("YES");
  else
    printf("NO");
  return 0;
}
