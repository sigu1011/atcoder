#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  if (N / 100 == N % 10) {
    printf("Yes");
  } else {
    printf("No");
  }

  return 0;
}
