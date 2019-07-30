#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);

  int array[3];
  int array_len = sizeof(array) / sizeof(array[0]);
  sort(array, array + array_len);

  int is_even_count = 0;
  for (auto i : array) {
    if (i % 2 == 0) is_even_count++;
  }

  int ans = 0;
  if (is_even_count == 3 || is_even_count == 0) {
    ans += (array[2] - array[0]) / 2;
    ans += (array[2] - array[1]) / 2;
  } else if (is_even_count == 2) {
    for (int i = 0; i < 3; i++) {
      if (array[i] % 2 == 0) array[i]++;
    }
    ans++;
    ans += (array[2] - array[0]) / 2;
    ans += (array[2] - array[1]) / 2;
  } else if (is_even_count == 1) {
    for (int i = 0; i < 3; i++) {
      if (array[i] % 2 != 0) array[i]++;
    }
    ans++;
    ans += (array[2] - array[0]) / 2;
    ans += (array[2] - array[1]) / 2;
  }

  printf("%d", ans);
}
