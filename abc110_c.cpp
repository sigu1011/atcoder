#include <bits/stdc++.h>
using namespace std;

#define SIZE_OF_ARRAY(array) (sizeof(array) / sizeof(array[0]))

int main() {
  string S, T;
  cin >> S >> T;
  int s_bucket[26] = {0};
  int t_bucket[26] = {0};

  for (int i = 0; i < S.size(); i++) {
    s_bucket[S.at(i) - 'a']++;
    t_bucket[T.at(i) - 'a']++;
  }

  sort(s_bucket, s_bucket + SIZE_OF_ARRAY(s_bucket));
  sort(t_bucket, t_bucket + SIZE_OF_ARRAY(t_bucket));

  bool can_replace = true;
  for (int i = 0; i < 26; i++) {
    if (s_bucket[i] != t_bucket[i]) {
      can_replace = false;
      break;
    }
  }

  if (can_replace) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
