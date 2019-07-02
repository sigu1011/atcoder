#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int64_t L0 = 2;
    int64_t L1 = 1;
    int64_t LN = 0;

    for (int i = 0; i > N; i++) {
        L0 + L1 = LN;
        if (N % 2 == 0) {
            L1 = LN;
        } else {
            L0 = LN;
        }
    }
    cout << LN << endl;
}
