#include <bits/stdc++.h>
using namespace std;

int main() {

  string S, T;
  cin >> S >> T;

  string answer = "No";

  for (int i = 0; i < S.size(); i++) {
    string s_ = S.substr(i, S.size() - i);
    s_ += S.substr(0, i);
    if (s_ == T) {
      answer = "Yes";
      break;
    }
  }
  
  cout << answer << endl;

}