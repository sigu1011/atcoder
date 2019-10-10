#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  string T;
  cin >> S >> T;

  int L = S.size();

  for (int i = 0; i < L; i++) {
    string rotation = "";
    for (int j = i; j < i + L; j++) {
      rotation.push_back(S.at(j % L));
    }
    if (rotation == T) {
      printf("Yes");
      return 0;
    }
  }

  printf("No");
  return 0;
}
