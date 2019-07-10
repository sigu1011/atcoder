#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int t;
        int target_x;
        int target_y;
        scanf("%d%d%d", &t, &target_x, &target_y);
        // 指定位置に辿り着けるか
        if (t - (target_x + target_y) < 0) {
            printf("No");
            return 0;
        }
        // 時刻tが余っている場合、偶数であれば戻ることが指定位置に戻ることが可能
        if ((t - (target_x + target_y)) % 2 == 0) {
            continue;
        } else {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
