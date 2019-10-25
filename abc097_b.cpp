#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  scanf("%d", &X);
  vector<bool> expo(X + 1);

  expo[1] = 1;
  for (int b = 2; b <= X; b++) {
    int v = b * b;
    while (v <= X) {
      expo.at(v) = true;
      v *= b;
    }
  }

  for (int i = X; i >= 1; i--) {
    if (expo.at(i)) {
      cout << i << endl;
      return 0;
    }
  }
}

