#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  scanf("%d%d", &H, &W);

  vector<string> p(H);
  for (int i = 0; i < H; i++) {
    cin >> p.at(i);
  }

  for (int i = 0; i < W + 2; i++) {
    cout << '#';
  }
  cout << endl;

  for (int i = 0; i < H; i++) {
    cout << '#' << p.at(i) << '#' << endl;
  }

  for (int i = 0; i < W + 2; i++) {
    cout << '#';
  }
  cout << endl;

  return 0;
}
