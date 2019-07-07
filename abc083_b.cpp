#include <bits/stdc++.h>
using namespace std;

int ctoi(const char c){
    if('0' <= c & c <= '9') return (c - '0');
    return -1;
}

int main() {
    int N , A, B;
    scanf("%d%d%d", &N, &A, &B);

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        int tmp = 0;
        string number = to_string(i);

        for (int j = 0; j < number.size(); j++) {
            int x = ctoi(number.at(j));
            tmp += x;
        }
        if (A <= tmp & tmp <= B) {
            sum += i;
        }
        tmp = 0;
    }
    printf("%d", sum);
}
