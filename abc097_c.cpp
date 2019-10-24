#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int K;
  scanf("%d", &K);

  set<string> se;
  int len = s.length();
  for (int bit = 0; bit < (1 << len); bit++) {
    string st;
    for (int i = 0; i < len; i++) {
      if ((bit & (1 << i))) {
        st.push_back(s.at(i));
      }
    }

    if (se.count(s) == 0) {
      se.insert(s);
    }
  }

  int i = 1;
  for (auto s : se) {
    if (i == K) {
      printf("%s", s.c_str());
      return 0;
    }
    i++;
  }
}
