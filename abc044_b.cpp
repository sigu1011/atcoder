#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin >> w;
  for (int i = 0; i < w.length(); i++) {
    int count = 0;
    for (int j = 0; j < w.length(); j++) {
      if (w.at(i) == w.at(j)) count++;
    }
    if (count % 2 != 0) {
      printf("No");
      return 0;
    }
  }
  printf("Yes");
  return 0;
}
