#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  vector<int> count(S.size());

  int answer = 0;

  for (int i = 0; i < S.size(); i++) {
    if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T'){
      if (i == 0) {
        count[i] = 1;
      } else {
        count[i] = count[i-1] + 1;
      }
      answer = max(answer, count[i]);
    } else {
      count[i] = 0;
    }
  }

  cout << answer << endl;

}