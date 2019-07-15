#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int price = 700;
    if (S.at(0) == 'o') price += 100;
    if (S.at(1) == 'o') price += 100;
    if (S.at(2) == 'o') price += 100;
    printf("%d", price);
}
