#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1;
  cin >> s1;
  string s2;
  cin >> s2;
  string s3;
  cin >> s3;

  string ans;
  ans += s1.at(0);
  ans += s2.at(0);
  ans += s3.at(0);
  transform(ans.begin(), ans.end(), ans.begin(), ::toupper);
  cout << ans << endl;
}
