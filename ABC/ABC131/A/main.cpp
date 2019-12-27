#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string S;
  cin >> S;

  char current;
  string answer = "Good";

  for (int i = 0; i < S.size(); i++) {
    if (current == S[i]) {
      answer = "Bad";
      break;
    } else {
      current = S[i];
    }
  }
  
  cout << answer << endl;
  
}