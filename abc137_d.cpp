#include <bits/stdc++.h>
using namespace std;

const int SIZE = 1e5 + 5;

int N;
int M;
int required_days;
int reward;
vector<int> job_list[SIZE];

int main() {
  scanf("%d%d", &N, &M);

  for (int i = 0; i < N; i++) {
    scanf("%d%d", &required_days, &reward);
    if (M - required_days >= 0) {
      // 0-M日後の期限内に実行できる仕事であれば候補とする
      // 添字が 0     -> 初日にのみ行える仕事
      // 添字が M - 1 -> 期限の一日前に行っても良い仕事
      job_list[M - required_days].push_back(reward);
    }
  }

  priority_queue<int> pq;

  long long ans = 0;
  for (int i = M - 1; i >= 0; i--) {
    // 期日の後ろから仕事を決定していく
    for (int j = 0; j < job_list[i].size(); j++) {
      // 優先順位付きキューにより報酬の降順に、実行可能な仕事を追加する
      pq.push(job_list[i].at(j));
    }

    if (pq.size()) {
      // 実行可能な仕事のうち、最も報酬の高い仕事を取りだす
      ans += pq.top();
      pq.pop();
    }
  }

  printf("%lld", ans);
  return 0;
}
