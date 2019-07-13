#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    scanf("%d%d%d", &N, &A, &B);
    int X = A * N;
    int amount = min(X, B);
    printf("%d", amount);
}
