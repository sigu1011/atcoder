#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    vector<int> d(N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &d.at(i));
    }
    sort(d.begin(), d.end());
    int diameter = d.at(0);
    int hight = 1;
    for (int i = 1; i < N; i++) {
        if (d.at(i) > diameter) {
            hight++;
            diameter = d.at(i);
        }
    }
    printf("%d", hight);
}
