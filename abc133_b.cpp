#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    scanf("%d%d", &N, &D);
    vector<vector<int>> P(N, vector<int> (D, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < D; j++) {
            scanf("%d", &P.at(i).at(j));
        }
    }
    int count = 0;
    for(int i = 0; i < N; i++) {
        for (int j = 1; i + j < N; j++) {
	        float X = 0;
        	for (int k = 0; k < D; k++) {
            	X += pow(P.at(i).at(k) - P.at(i+j).at(k), 2.0);
        	}
        	float S = sqrt(X);
       		float integernal_part = 0;
        	float fractional_part = modf(S, &integernal_part);
        	if (fractional_part == 0) {
            	count++;
        	}
        }
    }
    printf("%d", count);
}
