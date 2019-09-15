#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (S == "Sunny") {
    printf("Cloudy");
  } else if (S == "Cloudy") {
    printf("Rainy");
  } else {
    printf("Sunny");
  }
  return 0;
}
