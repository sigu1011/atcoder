#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  vector<long long> A(N + 1, 0);
  vector<long long> B(N, 0);
  for (int i = 0; i < N + 1; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> B.at(i);
  }

  long long ans = 0;
  for (int i = 0; i < N; i++) {
    if (A.at(i) <= B.at(i)) {
      // モンスターを倒しきれるときは倒しきる
      B.at(i) -= A.at(i);
      ans += A.at(i);
      A.at(i) = 0;
    } else {
      // モンスターを倒しきれない場合はできる限り倒しておく
      A.at(i) -= B.at(i);
      ans += B.at(i);
      B.at(i) = 0;
    }

    if (B.at(i) > 0) {
      // 余力がある場合は、次の隣の町のモンスターも倒す
      if (A.at(i + 1) <= B.at(i)) {
        // 余力で全て倒しきれる場合
        B.at(i) -= A.at(i + 1);
        ans += A.at(i + 1);
        A.at(i + 1) = 0;
      } else {
        // モンスターを倒しきれない場合はできる限り倒しておく
        A.at(i + 1) -= B.at(i);
        ans += B.at(i);
        B.at(i) = 0;
      }
    }
  }

  printf("%lld", ans);
  return 0;
}
