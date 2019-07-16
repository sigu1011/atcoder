#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    int S = 1;
    while(S * 2 <= N) {
        S *= 2;
    }
    printf("%d", S);
}
