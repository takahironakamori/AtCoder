#include <bits/stdc++.h>
using namespace std;

int main() {

  string S, T;
  cin >> S >> T;

  string result = "You can win";

  for (int i = 0; i < S.size(); i++) {
    if (S[i] != T[i]) {
      if (S[i] == '@') {
        if (T[i] != 'a' && T[i] != 't' && T[i] != 'c' && T[i] != 'o' && T[i] != 'd' && T[i] != 'e' && T[i] != 'r') {
          result = "You will lose";
        }
      } else if (T[i] == '@') {
        if (S[i] != 'a' && S[i] != 't' && S[i] != 'c' && S[i] != 'o' && S[i] != 'd' && S[i] != 'e' && S[i] != 'r') {
          result = "You will lose";
        }
      } else {
        result = "You will lose";
      }
    }
  }

  cout << result << endl;

}