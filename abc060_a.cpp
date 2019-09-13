#include <bits/stdc++.h>
using namespace std;

int main() {
  string A, B, C;
  cin >> A >> B >> C;

  if (A.at(A.length() - 1) == B.at(0) && B.at(B.length() - 1) == C.at(0))
    printf("YES");
  else
    printf("NO");
  return 0;
}
