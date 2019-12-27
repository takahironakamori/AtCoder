#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  string S;
  cin >> S;

  vector<int> ascii(26);

  for (int i = 0; i < S.size(); i++) {
    ascii[S[i] - 'A']++;
  }

  string answer = "Yes";

  for (int i = 0; i < 26; i++) {
    if (ascii[i] != 0 && ascii[i] != 2) {
      answer = "No";
      break;
    }
  }
  
  cout << answer << endl;
  
}