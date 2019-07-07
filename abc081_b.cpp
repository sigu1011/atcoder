#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    bool f = false;
    int count = 0;

    while(!f) {
        for (int i = 0; i < N; i++) {
            if (A.at(i) % 2 == 0 & f == false) {
               A.at(i) = A.at(i) / 2;
                if (i == N - 1) {
                    count++;
                }
            } else {
                f = true;
                break;
            }
        }
    }
    cout << count << endl;
}
