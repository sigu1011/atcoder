#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<string, int>> p;
    map<string, int> d;

    for (int i = 0; i < N; i++) {
        string name;
        int score;
        cin >> name >> score;
        // sort用
        p.push_back(make_pair(name, score))
        // 入力順序を逆引きするためのmap
        d[name + to_string(score)] = i;
    }
    sort(p.begin(), p.end());

    for (pair<string, int> x : p) {
        string name;
        int score;
        tie(name, score) = x;
        cout << d[name + to_string(score)] << endl;
    }
}
