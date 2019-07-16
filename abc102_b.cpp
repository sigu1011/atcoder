#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A.at(i));
    }
    int MIN = A.at(0);
    int MAX = A.at(0);
    for (int i = 1; i < N; i++) {
        if (A.at(i) > MAX) {
            MAX = A.at(i);
        } else if (A.at(i) < MIN) {
            MIN = A.at(i);
        }
    }
    printf("%d", MAX - MIN);
}
