#include <bits/stdc++.h>
using namespace std;

int main() {
  char X, Y;
  cin >> X >> Y;
  if (X < Y) printf("<");
  if (X == Y) printf("=");
  if (X > Y) printf(">");
  return 0;
}
