#include <bits/stdc++.h>
using namespace std;

int main() {
  char S[100010];
  scanf("%s", S);
  int len = strlen(S);

  int ans1 = 0, ans2 = 0;
  for (int i = 0; i < len; i++) {
    if (i % 2 == S[i] - '0') {
      // 黒色スタート時の塗り替え数を検証
      ans1++;
    } else {
      // 白色スタート時の塗り替え数を検証
      ans2++;
    }
  }

  printf("%d", min(ans1, ans2));
  return 0;
}
