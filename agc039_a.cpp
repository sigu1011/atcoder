#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool is_all_same(const string &s) {
  for (int i = 1; i < s.size(); i++) {
    if (s.front() != s.at(i)) {
      return false;
    }
  }
  return true;
}

int solve(const string &s) {
  char pre_char = '+';
  int count = 0;
  int num_to_rewrite = 0;
  for (char c : s) {
    if (c == pre_char) {
      count++;
      if (count % 2 == 0) {
        num_to_rewrite++;
      }
    } else {
      pre_char = c;
      count = 1;
    }
  }
  return num_to_rewrite;
}

int main() {
  string S;
  cin >> S;
  int K;
  scanf("%d", &K);

  // Sが1文字で構成される場合は、|S| * K / 2 を求める
  if (is_all_same(S)) {
    printf("%lld", (ll)S.size() * (ll)K / 2LL);
    return 0;
  }

  string SS = S + S;
  // K = 1, 2 ... とし、書き換える操作を並べると等差数列となる
  // そこで、初項と第二項を求め、K番目を求める
  int first = solve(S);
  int second = solve(SS);
  int diff = second - first;
  printf("%lld", (ll)first + ((ll)diff * (ll)(K - 1)));

  return 0;
}
