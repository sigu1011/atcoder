#include <bits/stdc++.h>
using namespace std;

long long Combination(int n, int r) {
  long long i = 1;
  int k = r > n - r ? n - r : r, count;

  if (k < 0) return 0;

  for (count = 1; count <= k; ++count) {
    i *= n - count + 1;
    i /= count;
  }
  return i;
}

int main() {
  int N;
  scanf("%d", &N);

  string s = "";
  map<string, int> mp;
  for (int i = 0; i < N; i++) {
    cin >> s;
    sort(s.begin(), s.end());

    auto itr = mp.find(s);
    if (itr != mp.end()) {
      itr->second++;
    } else {
      mp[s] = 1;
    }
  }

  long long ans = 0;
  for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    if (itr->second > 1) {
      ans += Combination(itr->second, 2);
    }
  }

  printf("%lld", ans);
  return 0;
}
