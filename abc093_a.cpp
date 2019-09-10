#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  sort(S.begin(), S.end());

  if (S == "abc") {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
