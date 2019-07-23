#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  map<string, int> mp;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    auto itr = mp.find(s);
    if (itr != mp.end()) {
      itr->second++;
    } else {
      mp[s] = 1;
    }
  }

  int M;
  scanf("%d", &M);
  for (int i = 0; i < M; i++) {
    string s;
    cin >> s;
    auto itr = mp.find(s);
    if (itr != mp.end()) {
      itr->second--;
    } else {
      mp[s] = -1;
    }
  }

  int ans = 0;
  for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    if (ans < itr->second) ans = itr->second;
  }
  printf("%d", ans);
}
