#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    string ans;
    for (int i = 0; i < S.size(); i += 2) {
        ans += S.at(i);
    }
    cout << ans << endl;
}
