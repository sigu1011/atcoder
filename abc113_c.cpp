#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  vector<tuple<int, int, int>> pref_year_id(M);
  for (int i = 0; i < M; i++) {
    int pid, year;
    cin >> pid >> year;
    pref_year_id.at(i) = make_tuple(pid, year, i);
  }

  sort(pref_year_id.begin(), pref_year_id.end());

  vector<int> pref_id(M), city_id(M), cnt(N + 1);
  for (auto& pyi : pref_year_id) {
    int pid, id;
    tie(pid, ignore, id) = pyi;
    pref_id.at(id) = pid;
    cnt[pid]++;
    city_id.at(id) = cnt[pid];
  }

  for (int i = 0; i < M; i++) {
    cout << setfill('0') << setw(6) << pref_id.at(i);
    cout << setfill('0') << setw(6) << city_id.at(i) << endl;
  }
  return 0;
}
