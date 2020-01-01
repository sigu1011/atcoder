#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, k, r, s, p, ans = 0;
  cin >> n >> k >> r >> s >> p;
  string T;
  cin >> T;

  vector<long> A(n);
  for (int i = 0; i < k; i++) {
    if (T.at(i) == 'r')
      A.at(i) = p;
    else if (T.at(i) == 's')
      A.at(i) = r;
    else
      A.at(i) = s;
  }

  for (int i = k; i < n; i++) {
    if ((T.at(i - k) == T.at(i)) & (A.at(i - k) > 0)) {
      A.at(i) = 0;
    } else {
      if (T.at(i) == 'r')
        A.at(i) = p;
      else if (T.at(i) == 's')
        A.at(i) = r;
      else
        A.at(i) = s;
    }
  }

  for (int i = 0; i < n; i++) {
    ans += A.at(i);
  }

  cout << ans << endl;
  return 0;
}
