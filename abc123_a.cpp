#include <bits/stdc++.h>
using namespace std;

const int ANTENNA_NUM = 5;

int main() {
  int p[ANTENNA_NUM];
  int k;
  for (int i = 0; i < ANTENNA_NUM; i++) {
    scanf("%d", &p[i]);
  }
  scanf("%d", &k);

  bool can_communicate = true;
  for (int i = 0; i < ANTENNA_NUM; i++) {
    for (int j = i + 1; j < ANTENNA_NUM; j++) {
      if (p[j] - p[i] > k) can_communicate = false;
    }
  }

  if (can_communicate) {
    printf("Yay!");
  } else {
    printf(":(");
  }
  return 0;
}
