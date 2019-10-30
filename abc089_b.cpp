#include <bits/stdc++.h>
using namespace std;

bool contains(string &str, char c) { return str.find(c) != string::npos; }

int main() {
  string n, s;
  getline(cin, n);
  getline(cin, s);
  cout << (contains(s, 'Y') ? "Four" : "Three") << endl;
  return 0;
}
