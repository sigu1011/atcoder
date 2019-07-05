#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int64_t L0 = 2;
    int64_t L1 = 1;
    int64_t LN = 0;

    if(N == 1) {
        cout << L1 << endl;
        return 0;
    }
    for (int i = 1; i < N; i++) {
        LN = L0 + L1;
        if (i % 2 != 0) {
            L0 = LN;
        } else {
            L1 = LN;
        }
    }
    cout << LN << endl;
    return 0;
}
