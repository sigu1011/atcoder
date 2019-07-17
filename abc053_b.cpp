#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int i = -1;
    int j = -1;
    for (int k = 0; k < S.size(); k++) {
        if (S.at(k) == 'A' && i == -1 && j == -1) {
            i = k;
        } else if (S.at(k) == 'Z' && i != -1 && j < k) {
            j = k;
        }
    }
    cout << S.substr(i, j-i+1).size() << endl;
}
