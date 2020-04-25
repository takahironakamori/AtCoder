#include <bits/stdc++.h>
using namespace std;


int main() {

  int N;
  string S;
  cin >> N >> S;

  long long countR = 0;
  long long countG = 0;
  long long countB = 0;

  for (int i = 0; i < N; i++) {
    if (S[i] == 'R') {
      countR++;
    } else if(S[i] == 'G') {
      countG++;
    } else {
      countB++;
    }
  }

  long long answer = countR * countG * countB;

  bool flg = true;
  int range = 0;
  while (flg) {
    if (N <= range * 2) {
      flg = false;
    } else {
      for (int i = 0; i < N - (range * 2); i++) {
        char s1 = S[i];
        char s2 = S[i + range];
        char s3 = S[i + range * 2];
        if(s1 != s2 && s2 != s3 && s3 != s1) {
          answer--;
        }
      }
      range++;
    }
  }

  cout << answer << endl;

  return 0;

}
