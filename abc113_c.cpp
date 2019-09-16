#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  scanf("%d%d", &N, &M);

  vector<int> num(N, 1);

  vector<pair<int, int>> city(M, make_pair(0, 0));
  for (int i = 0; i < M; i++) {
    int P = 0, Y = 0;
    scanf("%d%d", &P, &Y);
    city.at(i) = make_pair(P, Y);
  }
  vector<pair<int, int>> city_(city.size());
  copy(city.begin(), city.end(), city_.begin());
  sort(city_.begin(), city_.end());

  map<pair<int, int>, string> dic;
  for (int i = 0; i < M; i++) {
    char id_first[7];
    char id_second[7];
    string id;
    sprintf(id_first, "%06d", city_.at(i).first);
    sprintf(id_second, "%06d", num.at(city_.at(i).first - 1));
    id += id_first;
    id += id_second;
    dic[city_.at(i)] = id;
    num.at(city_.at(i).first - 1)++;
  }

  for (int i = 0; i < M; i++) {
    printf("%s\n", dic[city.at(i)].c_str());
  }
  return 0;
}
