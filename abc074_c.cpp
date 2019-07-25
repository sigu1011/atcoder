#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D, E, F;
  scanf("%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F);

  double current = -1;
  double max_percent = (double)E / (double)(100 + E);
  int sugar_water = 0;
  int in_sugar = 0;

  for (int a = 0; a <= 30; a++) {
    for (int b = 0; b <= 30; b++) {
      int water = 100 * A * a + 100 * B * b;

      for (int c = 0; c <= 3000; c += C) {
        for (int d = 0; d <= 3000; d += D) {
          int sugar = c + d;

          if (water + sugar > F) {
            break;
          }

          double percent = (double)sugar / (double)(water + sugar);
          if (current <= percent && percent <= max_percent) {
            sugar_water = water + sugar;
            in_sugar = sugar;
            current = percent;
          }
        }
      }
    }
  }
  printf("%d %d", sugar_water, in_sugar);
  return 0;
}
