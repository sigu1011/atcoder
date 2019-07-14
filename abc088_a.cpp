#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    scanf("%d%d", &N, &A);
    if (N % 500 == 0 || N % 500 <= A) {
        printf("Yes");
        return 0;
    } else {
        printf("No");
        return 0;
    }
}
