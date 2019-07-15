#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string t;
    cin >> s;
    cin >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());

    if(s < t) printf("Yes");
    else printf("No");
}
