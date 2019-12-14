#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.second != b.second) return a.second > b.second;
  return a.first < b.first;
}

int main() {
  int n;
  scanf("%d", &n);

  map<int, int> om;
  map<int, int> em;
  for (int i = 0; i < n / 2; i++) {
    int o, e;
    scanf("%d%d", &o, &e);
    om[o]++;
    em[e]++;
  }

  if (om.size() == 1 && em.size() == 1) {
    int key1, key2;
    for (auto e : om) key1 = e.first;
    for (auto e : em) key2 = e.first;
    if (key1 == key2) {
      printf("%d", n / 2);
    } else {
      printf("0");
    }
    return 0;
  }

  vector<pair<int, int>> ov;
  for (auto e : om) ov.push_back(make_pair(e.first, e.second));
  vector<pair<int, int>> ev;
  for (auto e : em) ev.push_back(make_pair(e.first, e.second));
  sort(ov.begin(), ov.end(), compare);
  sort(ev.begin(), ev.end(), compare);

  int ans = 0;
  int O1_key = ov.at(0).first;
  int O1 = ov.at(0).second;
  int E1_key = ev.at(0).first;
  int E1 = ev.at(0).second;
  ans = n - O1 - E1;
  if (O1_key == E1_key) {
    int O2 = ov.at(1).second;
    int E2 = ev.at(1).second;
    ans = min((n - O1 - E2), (n - O2 - E1));
  }

  printf("%d", ans);
  return 0;
}
