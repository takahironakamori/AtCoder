#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  int count = 0;
  string s_ = S;

  for (int i = 1; i < S.length(); i++) {
    
    s_ = s_.erase(s_.length() - 1);

    if (s_.length() % 2 == 0) {
      string s1_ = s_.substr(s_.length() / 2);
      string s2_ = s_.substr(0, s_.length() / 2);
      if (s1_ == s2_) {
        count = s_.length();
        break;
      }
    } else {
      continue;
    }

  }
  
  cout << count << endl;

}