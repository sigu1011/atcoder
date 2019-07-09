#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    reverse(S.begin(), S.end());
    int i = 0;
    while(i < S.size()) {
        if (S.substr(i, 5) == "maerd") {
            i += 5;
            continue;
        } else if (S.substr(i, 5) == "esare") {
            i += 5;
            continue;
        } else if (S.substr(i, 6) == "resare") {
            i += 6;
            continue;
        } else if (S.substr(i, 7) == "remaerd") {
            i += 7;
            continue;
       } else {
            printf("NO");
            return 0;
       }
    }
    printf("YES");
    return 0;
}
