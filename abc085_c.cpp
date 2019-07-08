#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Y;
    scanf("%d%d", &N, &Y);

    int A = Y / 1000;
    for (int i=0; i <= A; i++) {
        for (int j=0; j <= N-i; j++) {
            if (1000*i + 5000*j + 10000*(N-i-j) == Y && N-i-j >= 0) {
                printf("%d %d %d", N-i-j, j, i);
                return 0;
            }
        }
    }
    printf("-1 -1 -1");
    return 0;
}
