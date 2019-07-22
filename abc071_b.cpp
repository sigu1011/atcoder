#include <bits/stdc++.h>
using namespace std;

int ctoi(char& c) { return (int)c - 'a'; }

char itoc(int& i) {
  int a = 0x61;
  return (char)i + a;
}

int main() {
  string S;
  cin >> S;

  int buckets[26] = {};
  for (int i = 0; i < S.size(); i++) {
    buckets[ctoi(S.at(i))]++;
  }

  for (int i = 0; i < 26; i++) {
    if (buckets[i] == 0) {
      printf("%c", itoc(i));
      return 0;
    }
  }
  printf("None");
  return 0;
}
