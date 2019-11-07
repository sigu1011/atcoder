#include <bits/stdc++.h>
using namespace std;

int main() {
  char a, b;
  cin >> a >> b;
  if (a == 'H') {
    printf("%c", b);
  } else {
    printf("%c", b == 'H' ? 'D' : 'H');
  }
  return 0;
}
