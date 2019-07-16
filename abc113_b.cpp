#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int T, A;
    scanf("%d", &N);
    scanf("%d%d", &T, &A);
    vector<int> H(N, 0);
    for (int i = 0; i < N; i++) {
        scanf("%d", &H.at(i));
    }

    vector<double> temperature(N, 0);
    for (int i = 0; i < N; i++) {
        temperature.at(i) = (double) T - H.at(i) * 0.006;
    }

    double target = (double) A;
    double diff = abs(target - temperature.at(0));
    int ans = 1;
    for (int i = 1; i < N; i++) {
        if (abs(target - temperature.at(i)) < diff) {
            diff = abs(target - temperature.at(i));
            ans = i + 1;
        }
    }
    printf("%d", ans);
}
