#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  int count = 0;

  bool has0 = false;

  for (int i = 0; i < S.size(); i++) {

    if (i == S.size() - 1) {
      if ((S[i] != '0') && has0 == false) {
        count++;
      }
    } else {
      if (S[i+1] == '+') {
        if ((S[i] != '0') && has0 == false) {
          count++;
        }
        has0 = false;
      } else {
        if (S[i] == '0') {
          has0 = true;
        }
      }
    }

  }

  cout << count << endl;

}