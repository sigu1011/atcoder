#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int count0 = 0;
  int count1 = 0;
  int count2 = 0;
  int count3 = 0;
  count0 = count(S.cbegin(), S.cend(), S.at(0));
  count1 = count(S.cbegin(), S.cend(), S.at(1));
  count2 = count(S.cbegin(), S.cend(), S.at(2));
  count3 = count(S.cbegin(), S.cend(), S.at(3));

  if(count0 + count1 + count2 + count3 == 8) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
