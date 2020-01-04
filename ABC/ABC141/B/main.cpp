#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  string answer = "Yes";

  for (int i = 0; i < S.size(); i++) {
    if (i % 2 == 0) {
      if(S[i] == 'L') {
        answer = "No";
        break;
      }
    } else {
      if(S[i] == 'R') {
        answer = "No";
        break;
      }
    }
  }

  cout << answer << endl;

}