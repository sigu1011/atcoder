#include <bits/stdc++.h>
using namespace std;

const int S_SIZE = 4;

bool isYYMM(const char str[]) {
  int YY = (str[0] - '0') * 10 + (str[1] - '0');
  int MM = (str[2] - '0') * 10 + (str[3] - '0');

  if (0 <= YY && YY <= 99 && 1 <= MM && MM <= 12) return true;

  return false;
}

bool isMMYY(const char str[]) {
  int MM = (str[0] - '0') * 10 + (str[1] - '0');
  int YY = (str[2] - '0') * 10 + (str[3] - '0');

  if (0 <= YY && YY <= 99 && 1 <= MM && MM <= 12) return true;

  return false;
}

int main() {
  char S[S_SIZE];
  for (int i = 0; i < S_SIZE; i++) {
    scanf("%s", &S[i]);
  }

  if (isYYMM(S) && isMMYY(S)) {
    printf("AMBIGUOUS");
    return 0;
  }

  if (isYYMM(S)) {
    printf("YYMM");
    return 0;
  }

  if (isMMYY(S)) {
    printf("MMYY");
    return 0;
  }

  printf("NA");
  return 0;
}
