#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<string> W(N);
  set<string> st;
  bool follow_rule = true;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    W.at(i) = s;
    if (st.count(s) == 0) {
      st.insert(s);
    } else {
      follow_rule = false;
    }
  }

  for (int i = 0; i < N - 1; i++) {
    if (W.at(i).back() != W.at(i + 1).front()) {
      follow_rule = false;
    }
  }

  if (follow_rule) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
