#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    priority_queue<int> card;
    for (int i = 0; i < N; i++) {
        int score;
        scanf("%d", &score);
        card.push(score);
    }
    int a_score = 0;
    int b_score = 0;
    while(!card.empty()) {
        a_score += card.top();
        card.pop();
        if (card.empty()) break;
        b_score += card.top();
        card.pop();
    }
    printf("%d", a_score - b_score);
}
