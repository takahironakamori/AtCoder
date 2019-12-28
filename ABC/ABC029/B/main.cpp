#include <bits/stdc++.h>
using namespace std;

int main() {

  int answer = 0;

  for (int i = 0; i < 12; i++) {
    
    string S;
    cin >> S;
    bool flg = true;
    
    for (int j = 0; j < S.size(); j++) {
      if (S[j] == 'r' && flg == true) {
        answer++;
        flg = false;
      }
    } 

  }

  cout << answer << endl;
 
}