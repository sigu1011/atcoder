#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L;
  scanf("%d%d", &N, &L);

  vector<string> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }

  sort(S.begin(), S.end());

  string ans;
  for (auto s : S) ans += s;
  cout << ans << endl;
}
