#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  scanf("%d", &a);
  string s;
  cin >> s;

  if (a >= 3200) {
    printf("%s", s.c_str());
  } else {
    printf("red");
  }

  return 0;
}
