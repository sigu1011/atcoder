#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<int> p(N, 0);
  vector<int> sort_p(N, 0);
  for (int i = 0; i < N; i++) {
    int value = 0;
    cin >> value;
    p.at(i) = value;
    sort_p.at(i) = value;
  }

  sort(sort_p.begin(), sort_p.end());

  int count = 0;
  for (int i = 0; i < N; i++) {
    if (p.at(i) != sort_p.at(i)) {
      count++;
    }
  }

  if (count == 0 || count == 2) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}
